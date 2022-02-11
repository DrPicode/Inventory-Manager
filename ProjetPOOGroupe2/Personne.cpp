#include "Personne.h"

Personne::Personne()
{

}

Personne::Personne(String^ n, String^ p, Adresse^ a)
{
    this->m_nom = n;
    this->m_prenom = p;
    this->m_adresse = a;
}

Personne::Personne(int i, String^ n, String^ p, Adresse^ a)
{
    this->m_id = i;
    this->m_nom = n;
    this->m_prenom = p;
    this->m_adresse = a;
}

int^ Personne::getId()
{
    return this->m_id;
}

String^ Personne::getNom()
{
    return this->m_nom;
}

String^ Personne::getPrenom()
{
    return this->m_prenom;
}

Adresse^ Personne::getAdresse()
{
    return this->m_adresse;
}

void Personne::setId(int^ i)
{
    this->m_id = i;
}

void Personne::setNom(String^ n)
{
    this->m_nom = n;
}

void Personne::setPrenom(String^ p)
{
    this->m_prenom = p;
}

void Personne::setAdresse(Adresse^ a)
{
    this->m_adresse = a;
}
