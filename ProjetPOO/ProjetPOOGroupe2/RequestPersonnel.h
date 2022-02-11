#pragma once
#include "Personnel.h"

ref class RequestPersonnel
{
private:
	int^ m_id;
	Personnel^ m_personnel;
public:
	RequestPersonnel();

	int^ getId();
	Personnel^ getPersonnel();

	void setId(int^ i);
	void setPersonnel(Personnel^ c);

	String^ insert();
	String^ setAdresse();
	String^ insertBirthDate();

	String^ deletePersonnel();
	String^ selectPersonnelMainMenu();
};

