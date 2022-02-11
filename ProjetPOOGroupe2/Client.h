#pragma once
#include "Personne.h"
#include <time.h>

ref class Client : public Personne
{
private:
	int^ m_idDate;
public: 
	Client();
	Client(String^ n, String^ p, Adresse^ a, int^ d);
	Client(int i, String^ n, String^ p, Adresse^ a, int^ d);

	int^ getIdDate();
	void setIdDate(int^ i);
};

