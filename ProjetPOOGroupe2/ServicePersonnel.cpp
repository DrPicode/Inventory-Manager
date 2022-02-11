#include "ServicePersonnel.h"

ServicePersonnel::ServicePersonnel()
{
    this->db = gcnew Bdd();
    this->requestManagerPersonnel = gcnew RequestPersonnel();
    this->requestManagerAdresse = gcnew RequestAdresse();
    this->m_personnel = gcnew Personnel();
}

void ServicePersonnel::addPersonnel(DateTime^ dateNaissance, DateTime^ dateEmbauche, String^ codePostal, String^ ville, String^ number, String^ street, String^ nom, String^ prenom, String^ sex)
{
    Date^ tempDateNaissance = gcnew Date(dateNaissance);
    Date^ tempDateEmbauche = gcnew Date(dateEmbauche);
    int^ idDateNaissance = this->db->actionRowId("INSERT INTO Date OUTPUT Inserted.id_date VALUES('" + tempDateNaissance->getSqlDate() + "');");
    int^ idDateEmbauche = this->db->actionRowId("INSERT INTO Date OUTPUT Inserted.id_date VALUES('" + tempDateEmbauche->getSqlDate() + "');");
    tempDateNaissance->setIdDate(idDateNaissance);
    tempDateEmbauche->setIdDate(idDateEmbauche);

    Ville^ tempVille = gcnew Ville(codePostal, ville);
    int^ idVille = this->db->actionRowId("INSERT INTO Ville OUTPUT Inserted.id_ville VALUES('" + tempVille->getCodePostal() + "', '" + tempVille->getVille() + "');");
    tempVille->setId(idVille);

    Adresse^ tempAdresse = gcnew Adresse(number, street, tempVille);
    int^ id_adresse = this->db->actionRowId("INSERT INTO Adresse OUTPUT Inserted.id_adresse VALUES('" + tempAdresse->getNumeroRue() + "', '" + tempAdresse->getRue() + "', " + tempAdresse->getVille()->getId() + ")");
    tempAdresse->setId(id_adresse);

    this->m_personnel = gcnew Personnel(nom, prenom, tempAdresse, tempDateNaissance, tempDateEmbauche, sex);

    this->requestManagerPersonnel->setPersonnel(this->m_personnel);
    this->db->actionRows(this->requestManagerPersonnel->insert());
}

int^ ServicePersonnel::getId()
{
    return this->m_id;
}

void ServicePersonnel::setId(int^ id)
{
    this->m_id = id;
}

void ServicePersonnel::supprimerPersonnel(int^ id)
{
    this->m_personnel->setId(id);
    this->requestManagerPersonnel->setPersonnel(this->m_personnel);
    this->db->actionRows(this->requestManagerPersonnel->deletePersonnel());

}

void ServicePersonnel::displayPersonnelsMainMenu(DataGridView^ data)
{
    DataSet^ dataset = this->db->getRows(this->requestManagerPersonnel->selectPersonnelMainMenu(), "RSL_PERSO");
    data->DataSource = dataset->Tables["RSL_PERSO"];
    data->Columns[0]->Visible = false;
    data->Columns[4]->Visible = false;
    data->Columns[9]->Visible = false;
}

Personnel^ ServicePersonnel::getPersonnel()
{
    return this->m_personnel;
}

void ServicePersonnel::setPersonnel(Personnel ^ personnel)
{
    this->m_personnel = personnel;
}

void ServicePersonnel::setPersonnel(DataGridViewRow^ rowToEdit)
{
    this->m_personnel->setId(Convert::ToInt32(rowToEdit->Cells[0]->Value));
    this->m_personnel->setNom(rowToEdit->Cells[1]->Value->ToString());
    this->m_personnel->setPrenom(rowToEdit->Cells[2]->Value->ToString());
    this->m_personnel->setSex(rowToEdit->Cells[3]->Value->ToString());

    Adresse^ adresse = gcnew Adresse();
    adresse->setId(Convert::ToInt32(rowToEdit->Cells[4]->Value));
    adresse->setNumeroRue(rowToEdit->Cells[7]->Value->ToString());
    adresse->setRue(rowToEdit->Cells[8]->Value->ToString());

    Ville^ ville = gcnew Ville();
    ville->setId(Convert::ToInt32(rowToEdit->Cells[9]->Value));
    adresse->setVille(ville);

    this->m_personnel->setAdresse(adresse);
}
