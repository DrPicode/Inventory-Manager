#pragma once
#include "Commande.h"
#include "Bdd.h"
#include "RequestCommande.h"
#include "RequestAdresse.h"
#include "RequestDate.h"
#include "Payement.h"
#include "RequestPayement.h"

using namespace System::Windows::Forms;

ref class ServiceCommande
{
private:
	int ^ m_id;
	Commande ^ m_commande;
	RequestCommande^ requestCommandeManager;
	RequestAdresse^ requestAdresseManager;
	RequestDate^ requestDateManager;
	RequestPayement^ requestPayementManager;

public:
	Bdd^ db;

	ServiceCommande();

	int ^ getId();
	Commande ^ getCommande();

	void setId(int ^ id);
	void setCommande(Commande^ commande);
	void setCommande(DataGridViewRow^ rowToEdit);

	void supprimerCommande(int^ id);
	int^ ajouterCommande(Commande^ c);
	void displayCommandeMainMenu(DataGridView^ data);

	int^ ajouterAdresse(Adresse^ a);
	int^ ajouterDate(Date^ a);
	int^ getLastId();


	void addArticle(DataGridViewRow^ a);
	void ajouterPayement(Payement^ p);
	DataTable^ getPayements(Payement^ p);
	DataTable^ selectCommandeByRef(String^ r);

	DataRowCollection^ getArticlesOfCommande();

	DataRow^ getCommandeById();
};
