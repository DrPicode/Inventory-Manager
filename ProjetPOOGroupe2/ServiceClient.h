#pragma once
#include "Client.h"
#include "Bdd.h"
#include "RequestClient.h"
#include "RequestAdresse.h"

using namespace System::Windows::Forms;

ref class ServiceClient
{
	public:
	int^ m_id;
	Client^ m_client;
	Bdd^ db;
	RequestClient^ requestClientManager;
	RequestAdresse^ requestAdresseManager;
public:
	ServiceClient();
	ServiceClient(Client^ c);
	ServiceClient(int^ i, Client^ c);

	int^ getId();
	Client^ getClient();

	void setId(int^ i);
	void setClient(Client^ c);
	void setClient(DataGridViewRow^ rowToEdit);

	void addClient(DateTime d, String^ c, String^ v, String^ n, String^ s, String^ na, String^ p);
	void supprimerClient(int^ id_client);
	void displayClientMainMenu(DataGridView^ data);
	void modifierClient();

	DataTable^ selectById(int^ id);
	DataTable^ selectByName(String^ s);
	DataTable^ getCities();

	DataRow^ getClientById();
	DataRow^ getAdresseById(int^ id);

	void getAllAboutClient();
};

