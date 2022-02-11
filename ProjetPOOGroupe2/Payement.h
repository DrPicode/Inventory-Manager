#pragma once
#include "Commande.h"

using namespace System;

ref class Payement
{
private:
	String^ type_payement;
	float^ montant;
	Commande^ commande;
	Date^ date;
public:
	Payement();

	void setTypePayement(String^ type);
	void setMontant(float^ montant);
	void setCommande(Commande^ commande);
	void setDate(Date^ date);

	String^ getTypePayement();
	float^ getMontant();
	Commande^ getCommande();
	Date^ getDate();
};

