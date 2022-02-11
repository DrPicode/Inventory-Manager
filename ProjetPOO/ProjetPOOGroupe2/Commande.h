#pragma once
#include "Date.h"
#include "Client.h"
#include <vector>

using namespace System;
using namespace System::Windows::Forms;

ref class Commande
{
private:
	int ^ m_idCommande;
	String ^ m_reference;
	Date ^ m_dateCommande;
	Date ^ m_dateLivraison;
	Client ^ m_client;
	Adresse^ m_adresseFacturation;
	Adresse ^ m_adresseLivraison;
	DataGridViewRowCollection^ m_articles;

public:
	Commande();
	int ^ getIdCommande();
	String ^ getReference();
	Date ^ getDateCommande();
	Date ^ getDateLivraison();
	Client ^ getClient();
	Adresse^ getAdresseFacturation();
	Adresse ^ getAdresseLivraison();
	DataGridViewRowCollection^ getArticles();

	void setIdCommande(int ^ idCommande);
	void setReference(String ^ reference);
	void setDateCommande(Date ^ dateCommande);
	void setDateLivraison(Date ^ dateLivraison);
	void setClient(Client ^ client);
	void setAdresseLivraison(Adresse^ adresse);
	void setAdresseFacturation(Adresse ^ adresse);
	void setArticles(DataGridViewRowCollection^ articles);

};
