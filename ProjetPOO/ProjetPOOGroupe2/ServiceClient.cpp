#include "ServiceClient.h"
#include "Date.h"
using namespace System::Windows::Forms;

ServiceClient::ServiceClient()
{
	this->db = gcnew Bdd();
	this->requestClientManager = gcnew RequestClient();
	this->requestAdresseManager = gcnew RequestAdresse();
	this->m_client = gcnew Client();
}

ServiceClient::ServiceClient(Client^ c)
{
	this->m_client = c;
	this->db = gcnew Bdd();
}

ServiceClient::ServiceClient(int^ i, Client^ c)
{
	this->m_id = i;
	this->m_client = c;
	this->db = gcnew Bdd();
}

int^ ServiceClient::getId()
{
	return this->m_id;
}

Client^ ServiceClient::getClient()
{
	return this->m_client;
}

void ServiceClient::setId(int^ i)
{
	this->m_id = i;
}

void ServiceClient::setClient(Client^ c)
{
	this->m_client = c;
}

void ServiceClient::setClient(DataGridViewRow^ rowToEdit)
{
	this->m_client->setId(Convert::ToInt32(rowToEdit->Cells[0]->Value));
	this->m_client->setNom(rowToEdit->Cells[1]->Value->ToString());
	this->m_client->setPrenom(rowToEdit->Cells[2]->Value->ToString());

	Adresse^ adresseClientToEdit = gcnew Adresse();
	adresseClientToEdit->setId(Convert::ToInt32(rowToEdit->Cells[3]->Value));
	adresseClientToEdit->setNumeroRue(rowToEdit->Cells[4]->Value->ToString());
	adresseClientToEdit->setRue(rowToEdit->Cells[5]->Value->ToString());

	Ville^ ville = gcnew Ville();
	ville->setId(Convert::ToInt32(rowToEdit->Cells[6]->Value));
	adresseClientToEdit->setVille(ville);

	this->m_client->setAdresse(adresseClientToEdit);
}

void ServiceClient::addClient(DateTime d, String^ c, String^ v, String^ n, String^ s, String^ na, String^ p)
{
	Date^ tempDate = gcnew Date(d);
	int^ i = this->db->actionRowId("INSERT INTO Date OUTPUT Inserted.id_date VALUES('" + tempDate->getSqlDate() + "');");
	tempDate->setIdDate(i);

	Ville^ tempVille = gcnew Ville(c, v);
	i = this->db->actionRowId("INSERT INTO Ville OUTPUT Inserted.id_ville VALUES('" + tempVille->getCodePostal() + "', '" + tempVille->getVille() + "');");
	tempVille->setId(i);

	Adresse^ tempAdresse = gcnew Adresse(n, s, tempVille);
	i = this->db->actionRowId("INSERT INTO Adresse OUTPUT Inserted.id_adresse VALUES('" + tempAdresse->getNumeroRue() + "', '" + tempAdresse->getRue() + "', " + tempAdresse->getVille()->getId() + ")");
	tempAdresse->setId(i);

	this->m_client = gcnew Client(na, p, tempAdresse, tempDate->getIdDate());

	this->requestClientManager->setClient(this->m_client);
	i = this->db->actionRowId(this->requestClientManager->insert());

	this->m_client->setId(i);
	this->requestClientManager->setClient(this->m_client);

	this->db->actionRows(this->requestClientManager->setAdresse());
}

void ServiceClient::supprimerClient(int^ id_client)
{
	this->m_client->setId(id_client);
	this->requestClientManager->setClient(this->m_client);

	this->db->actionRows(this->requestClientManager->deleteClient());
}

void ServiceClient::displayClientMainMenu(DataGridView^ data)
{
	DataSet^ dataset = this->db->getRows(this->requestClientManager->selectClientForMainMenu(), "RSL_CLIENTS");
	data->DataSource = dataset->Tables["RSL_CLIENTS"];
	data->Columns[3]->Visible = false;
	data->Columns[6]->Visible = false;
	data->Columns[9]->Visible = false;
}

void ServiceClient::modifierClient()
{
	this->requestClientManager->setClient(this->m_client);
	this->requestAdresseManager->setAdressse(this->m_client->getAdresse());

	this->db->actionRows(this->requestAdresseManager->update());
	this->db->actionRows(this->requestClientManager->update());
}

DataTable^ ServiceClient::selectById(int^ id)
{
	return this->db->getRows(this->requestClientManager->selectById(id), "CL")->Tables["CL"];
}

DataTable^ ServiceClient::selectByName(String^ name)
{
	return this->db->getRows(this->requestClientManager->selectByName(name), "CL")->Tables["CL"];
}

DataTable^ ServiceClient::getCities()
{
	return this->db->getRows(this->requestAdresseManager->getCities(), "RSL_VILLES")->Tables["RSL_VILLES"];
}

DataRow^ ServiceClient::getClientById()
{
	this->requestClientManager->setClient(this->m_client);
	return ((DataRowCollection^) this->db->getRows(this->requestClientManager->getClientById(), "RSL_CLIENT")->Tables["RSL_CLIENT"]->Rows)[0];
}

DataRow^ ServiceClient::getAdresseById(int^ id)
{
	this->requestAdresseManager->getAdresse()->setId(id);
	return ((DataRowCollection^)this->db->getRows(this->requestAdresseManager->getAdresseById(), "ADR")->Tables["ADR"]->Rows)[0];
}

void ServiceClient::getAllAboutClient()
{
	this->requestClientManager->getClient()->setId(this->m_client->getId());
	DataSet^ dataset = this->db->getRows(this->requestClientManager->getAllAboutClient(), "RSL_CLIENT");
	DataRow^ dataClient = dataset->Tables["RSL_CLIENT"]->Rows[0];
	this->m_client->setNom(dataClient[1]->ToString());
	this->m_client->setPrenom(dataClient[2]->ToString());

	Adresse^ tempAdresse = gcnew Adresse();
	tempAdresse->setNumeroRue(dataClient[4]->ToString());
	tempAdresse->setRue(dataClient[5]->ToString());
	Ville^ tempVille = gcnew Ville();
	tempVille->setCodePostal(dataClient[7]->ToString());
	tempVille->setVille(dataClient[6]->ToString());

	tempAdresse->setVille(tempVille);
	this->m_client->setAdresse(tempAdresse);
	
}



