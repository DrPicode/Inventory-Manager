#pragma once
#include "Adresse.h"
ref class RequestAdresse
{
private:
	Adresse^ m_adresse;
public:
	RequestAdresse();

	void setAdressse(Adresse^ a);
	Adresse^ getAdresse();

	String^ update();
	String^ insert();
	String^ getCities();

	String^ getAdresseById();
};

