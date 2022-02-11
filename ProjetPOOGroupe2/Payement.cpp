#include "Payement.h"

Payement::Payement()
{
}

void Payement::setTypePayement(String^ type)
{
    this->type_payement = type;
}

void Payement::setMontant(float^ montant)
{
    this->montant = montant;
}

void Payement::setCommande(Commande^ commande)
{
    this->commande = commande;
}

void Payement::setDate(Date^ date)
{
    this->date = date;
}

String^ Payement::getTypePayement()
{
    return this->type_payement;
}

float^ Payement::getMontant()
{
    return this->montant;
}

Commande^ Payement::getCommande()
{
    return this->commande;
}

Date^ Payement::getDate()
{
    return this->date;
}
