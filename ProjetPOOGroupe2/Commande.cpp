#include "Commande.h"

Commande::Commande()
{
}

int ^ Commande::getIdCommande()
{
    return this->m_idCommande;
}

String ^ Commande::getReference()
{
    return this->m_reference;
}

Date ^ Commande::getDateCommande()
{
    return this->m_dateCommande;
}

Date ^ Commande::getDateLivraison()
{
    return this->m_dateLivraison;
}

Client ^ Commande::getClient()
{
    return this->m_client;
}

Adresse ^ Commande::getAdresseFacturation()
{
    return this->m_adresseFacturation;
}

Adresse^ Commande::getAdresseLivraison()
{
    return this->m_adresseLivraison;
}

DataGridViewRowCollection^ Commande::getArticles()
{
    return this->m_articles;
}

void Commande::setIdCommande(int ^ id)
{
    this->m_idCommande = id;
}

void Commande::setReference(String ^ reference)
{
    this->m_reference = reference;
}

void Commande::setDateCommande(Date ^ dateCommande)
{
    this->m_dateCommande = dateCommande;
}

void Commande::setDateLivraison(Date ^ dateLivraison)
{
    this->m_dateLivraison = dateLivraison;
}

void Commande::setClient(Client ^ client)
{
    this->m_client = client;
}

void Commande::setAdresseFacturation(Adresse ^ adresse)
{
    this->m_adresseFacturation = adresse;
}

void Commande::setAdresseLivraison(Adresse^ adresse)
{
    this->m_adresseLivraison = adresse;
}

void Commande::setArticles(DataGridViewRowCollection ^ articles)
{
    this->m_articles = articles;
}