#pragma once
#include "Client.h"

ref class RequestClient
{
private:
	int^ m_id;
	Client^ m_client;
public:
	RequestClient();

	int^ getId();
	Client^ getClient();

	void setId(int^ i);
	void setClient(Client^ c);

	String^ insert();
	String^ deleteClient();
	String^ setAdresse();
	String^ update();

	String^ selectById(int^ id);

	String^ selectByName(String^ name);

	String^ selectClientForMainMenu();
	String^ getClientById();
	String^ getAllAboutClient();
};

