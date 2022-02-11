#pragma once
#include "Commande.h"
ref class RequestCommande
{
private:
	Commande^ m_commande;
public:
	RequestCommande();

	void setCommande(Commande^ c);
	Commande^ getCommande();

	String^ deleteCommande();
	String^ selectCommandesMainMenu();
	String^ getLastId();
	String^ insert();
	String^ addArticle(DataGridViewRow^ article);
	String^ selectCommandeByRef(String^ r);

	String^ getArticlesOfCommande();

	String^ getCommandeById();
};

