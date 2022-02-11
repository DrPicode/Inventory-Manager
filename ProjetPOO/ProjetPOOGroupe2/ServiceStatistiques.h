#pragma once
#include "Bdd.h"
#include "RequestStatistiques.h"

ref class ServiceStatistiques
{
private:
	Bdd^ db;
	RequestStatistiques^ requestStatistiquesManager;
public:
	ServiceStatistiques();

	void simulationTVA();
	float^ getPanierMoyen();
	float^ getValeurAchatStock();
	float^ getValeurCommercialeStock();
	float^ getCAMois(int^ year, int^ month);
	DataTable^ getSousSeuil();

	DataTable^ getMostArticles();
	DataTable^ getLessArticles();
	DataTable^ simulation(int^ tva1, int^ tv2, int^ tv3, double^ marge, int^ remise, int^ demarque);
};

