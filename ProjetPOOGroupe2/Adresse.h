#pragma once
#include "Ville.h"

ref class Adresse
{
private:
	int^ m_id;
	String^ m_numeroRue;
	String^ m_rue;
	Ville^ m_ville;
public:
	Adresse();
	Adresse(String^ n, String^ r, Ville^ v);
	Adresse(int^ i, String^ n, String^ r, Ville^ v);

	int^ getId();
	String^ getNumeroRue();
	String^ getRue();
	Ville^ getVille();

	void setId(int^ i);
	void setNumeroRue(String^ n);
	void setRue(String^ r);
	void setVille(Ville^ v);
};

