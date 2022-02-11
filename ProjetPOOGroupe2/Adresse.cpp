#include "Adresse.h"

Adresse::Adresse()
{
    
}

Adresse::Adresse(String^ n, String^ r, Ville^ v)
{
    this->m_numeroRue = n;
    this->m_rue = r;
    this->m_ville = v;
}

Adresse::Adresse(int^ i, String^ n, String^ r, Ville^ v)
{
    this->m_id = i;
    this->m_numeroRue = n;
    this->m_rue = r;
    this->m_ville = v;
}

int^ Adresse::getId()
{
    return this->m_id;
}

String^ Adresse::getNumeroRue()
{
    return this->m_numeroRue;
}

String^ Adresse::getRue()
{
    return this->m_rue;
}

Ville^ Adresse::getVille()
{
    return this->m_ville;
}

void Adresse::setId(int^ i)
{
    this->m_id = i;
}

void Adresse::setNumeroRue(String^ n)
{
    this->m_numeroRue = n;
}

void Adresse::setRue(String^ r)
{
    this->m_rue = r;
}

void Adresse::setVille(Ville^ v)
{
    this->m_ville = v;
}
