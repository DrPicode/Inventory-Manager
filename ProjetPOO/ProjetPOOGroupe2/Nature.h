#pragma once

using namespace System;

ref class Nature
{
private:
	int^ m_id;
	String^ m_nom;
	float^ m_TVA;

public:
	Nature();

	int^ getId();
	String^ getNom();
	float^ getTVA();

	void setId(int^ id);
	void setNom(String^ nom);
	void setTVA(float^ prix);
};

