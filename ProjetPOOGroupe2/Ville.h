#pragma once

using namespace System;

ref class Ville
{
private:
	int^ m_id;
	String^ m_codePostal;
	String^ m_ville;
public:
	Ville();
	Ville(String^ c, String^ v);
	Ville(int i, String^ c, String^ v);

	int^ getId();
	String^ getCodePostal();
	String^ getVille();

	void setId(int^ i);
	void setCodePostal(String^ c);
	void setVille(String^ v);
};

