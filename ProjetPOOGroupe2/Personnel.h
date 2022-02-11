#pragma once
#include "Personne.h"
#include "Date.h"

ref class Personnel : public Personne
{
private:
	Date^ m_dateEmbauche;
	Date^ m_dateNaissance;
	String^ m_sex;
public:
	Personnel();
	Personnel(String^ nom, String^ prenom, Adresse^ adresse, Date^ dateNaissance, Date^ dateEmbauche, String^ sex);

	Date^ getDateEmbauche();
	void setDateEmbauche(Date^ d);

	Date^ getDateNaissance();
	void setDateNaissance(Date^ d);

	String^ getSex();
	void setSex(String^ s);
};

