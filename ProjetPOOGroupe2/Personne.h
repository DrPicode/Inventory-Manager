#pragma once
#include "Adresse.h"

using namespace System;

ref class Personne
{
private:
	int^ m_id;
	String^ m_nom;
	String^ m_prenom;
	Adresse^ m_adresse;
public:
	Personne();
	Personne(String^ n, String^ p, Adresse^ a);
	Personne(int i, String^ n, String^ p, Adresse^ a);

	int^ getId();
	String^ getNom();
	String^ getPrenom();
	Adresse^ getAdresse();

	void setId(int^ i);
	void setNom(String^ n);
	void setPrenom(String^ p);
	void setAdresse(Adresse^ a);
};

