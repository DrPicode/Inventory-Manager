#include "Nature.h"
Nature::Nature()
{
}
int ^ Nature::getId()
{
    return this->m_id;
}

String ^ Nature::getNom()
{
    return this->m_nom;
}

float ^ Nature::getTVA()
{
    return this->m_TVA;
}

void Nature::setId(int ^ id)
{
    this->m_id = id;
}

void Nature::setNom(String ^ nom)
{
    this->m_nom = nom;
}

void Nature::setTVA(float ^ tva)
{
    this->m_TVA = tva;
}