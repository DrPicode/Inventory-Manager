#pragma once
#include "Nature.h"

using namespace System;

ref class Article
{
private:
	int^ m_id;
	String^ m_reference;
	String^ m_nom;
	float^ m_prixHt;
	int^ stock;
	float^ m_prixAchat;
	int^ seuil;
	Nature^ m_nature;
public:
	Article();

	int^ getId();
	String^ getReference();
	String^ getNom();
	float^ getPrixHt();
	int^ getStock();
	float^ getPrixAchat();
	int^ getSeuil();
	Nature^ getNature();

	void setId(int^ id);
	void setReference(String^ reference);
	void setNom(String^ nom);
	void setPrixHt(float^ prix);
	void setStock(int^ stock);
	void setPrixAchat(float^ prix);
	void setSeuil(int^ seuil);
	void setNature(Nature^ nature);

};

