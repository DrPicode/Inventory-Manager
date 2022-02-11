#include "RequestPayement.h"

RequestPayement::RequestPayement()
{
    this->payement = gcnew Payement();
}

void RequestPayement::setPayement(Payement^ p)
{
    this->payement = p;
}

Payement^ RequestPayement::getPayement()
{
    return this->payement;
}

String^ RequestPayement::insert()
{
    return "INSERT INTO paiement VALUES('" + this->payement->getTypePayement() + "', '" + this->payement->getMontant()->ToString()->Replace(",", ".") + "', " + this->payement->getCommande()->getIdCommande() + ", " + this->payement->getDate()->getIdDate() + ")";
}

String^ RequestPayement::getAllPayement()
{
    return "SELECT type_paiement, ROUND(montant, 2) AS montant, CONVERT(DATE, date.date) AS Date FROM paiement LEFT JOIN date ON date.id_date = paiement.id_date  WHERE id_commande =" + this->payement->getCommande()->getIdCommande();
}
