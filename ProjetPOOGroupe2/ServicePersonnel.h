#pragma once
#include "Personnel.h"
#include "RequestAdresse.h"
#include "RequestPersonnel.h"
#include "Bdd.h"

using namespace System::Windows::Forms;

ref class ServicePersonnel
{
private:
	int^ m_id;
	Personnel^ m_personnel;
	RequestPersonnel^ requestManagerPersonnel;
	RequestAdresse^ requestManagerAdresse;
public:
	Bdd^ db;
	ServicePersonnel();	
	
	void addPersonnel(DateTime^ dateNaissance, DateTime^ dateEmbauche, String^ codePostal, String^ ville, String^ number, String^ street, String^ nom, String^ prenom, String^ sex);

	Personnel^ getPersonnel();
	void setPersonnel(Personnel^ p);
	void setPersonnel(DataGridViewRow^ rowToEdit);

	int^ getId();
	void setId(int^ i);

	void supprimerPersonnel(int^ id);
	void displayPersonnelsMainMenu(DataGridView^ data);
};

