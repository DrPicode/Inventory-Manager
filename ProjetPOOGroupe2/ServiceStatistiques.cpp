#include "ServiceStatistiques.h"

ServiceStatistiques::ServiceStatistiques()
{
    this->db = gcnew Bdd();
    this->requestStatistiquesManager = gcnew RequestStatistiques();
}

void ServiceStatistiques::simulationTVA()
{
}

float^ ServiceStatistiques::getPanierMoyen()
{
    DataSet^ panierMoyen = this->db->getRows(this->requestStatistiquesManager->getPanierMoyen(), "STOCK_VALUE");
    float^ row = Convert::ToSingle(((DataRow^)panierMoyen->Tables["STOCK_VALUE"]->Rows[0])[0]);
    return row;
}

float^ ServiceStatistiques::getValeurAchatStock()
{
    DataSet^ dataset = this->db->getRows(this->requestStatistiquesManager->getValeurStock(), "STOCK_VALUE");
    float^ row = Convert::ToSingle(( (DataRow^) dataset->Tables["STOCK_VALUE"]->Rows[0] )[0]);
    return row;
}

float^ ServiceStatistiques::getValeurCommercialeStock()
{
    DataSet^ dataset = this->db->getRows(this->requestStatistiquesManager->getValeurCommerciale(), "STOCK_CO");
    float^ row = Convert::ToSingle(((DataRow^)dataset->Tables["STOCK_CO"]->Rows[0])[0]);
    return row;
}

float^ ServiceStatistiques::getCAMois(int^ year, int^ month)
{
    return Convert::ToSingle(((DataRow^) (this->db->getRows(this->requestStatistiquesManager->getCAMois(year, month), "CA")->Tables["CA"]->Rows)[0])[0]);
}

DataTable^ ServiceStatistiques::getSousSeuil()
{
    return ((DataSet^)this->db->getRows(this->requestStatistiquesManager->getSousSeuil(), "RSL_SEUIL"))->Tables["RSL_SEUIL"];
}

DataTable^ ServiceStatistiques::getMostArticles()
{
    return this->db->getRows(this->requestStatistiquesManager->getMostArticle(), "MOST")->Tables["MOST"];
}

DataTable^ ServiceStatistiques::getLessArticles()
{
    return this->db->getRows(this->requestStatistiquesManager->getLessArticle(), "LESS")->Tables["LESS"];
}

DataTable^ ServiceStatistiques::simulation(int^ tva1, int^ tv2, int^ tv3, double^ marge, int^ remise, int^ demarque)
{
    return this->db->getRows(this->requestStatistiquesManager->getSimu(tva1, tv2, tv3, marge, remise, demarque), "SIMU")->Tables["SIMU"];
}
