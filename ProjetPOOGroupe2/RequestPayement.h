#pragma once
#include "Payement.h"
ref class RequestPayement
{
private:
	Payement^ payement;
public:
	RequestPayement();

	void setPayement(Payement^ p);
	Payement^ getPayement();

	String^ insert();
	String^ getAllPayement();
};

