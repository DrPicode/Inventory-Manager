#pragma once

using namespace System;

ref class RequestStatistiques
{
public:
	RequestStatistiques();

	String^ getValeurStock();
	String^ getPanierMoyen();
	String^ getSousSeuil();
	String^ getValeurCommerciale();

	String^ getMostArticle();
	String^ getLessArticle();
	String^ getCAMois(int^ year, int^ month);
	String^ getSimu(int^ tva1, int^ tv2, int^ tv3, double^ marge, int^ remise, int^ demarque);
};

