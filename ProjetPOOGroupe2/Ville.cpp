#include "Ville.h"

Ville::Ville()
{
    
}

Ville::Ville(String^ c, String^ v)
{
    this->m_codePostal = c;
    this->m_ville = v;
}

Ville::Ville(int i, String^ c, String^ v)
{
    this->m_id = i;
    this->m_codePostal = c;
    this->m_ville = v;
}

int^ Ville::getId()
{
    return this->m_id;
}

String^ Ville::getCodePostal()
{
    return this->m_codePostal;
}

String^ Ville::getVille()
{
    return this->m_ville;
}

void Ville::setId(int^ i)
{
    this->m_id = i;
}

void Ville::setCodePostal(String^ c)
{
    this->m_codePostal = c;
}

void Ville::setVille(String^ v)
{
    this->m_ville = v;
}
