#include "Article.h"
Article::Article()
{
}
int ^ Article::getId()
{
    return this->m_id;
}

String ^ Article::getReference()
{
    return this->m_reference;
}

String ^ Article::getNom()
{
    return this->m_nom;
}

float^ Article::getPrixHt()
{
    return this->m_prixHt;
}

int^ Article::getStock()
{
    return this->stock;
}

float^ Article::getPrixAchat()
{
    return this->m_prixAchat;
}

int^ Article::getSeuil()
{
    return this->seuil;
}

Nature ^ Article::getNature()
{
    return this->m_nature;
}

void Article::setId(int ^ id)
{
    this->m_id = id;
}

void Article::setReference(String ^ reference)
{
    this->m_reference = reference;
}

void Article::setNom(String ^ nom)
{
    this->m_nom = nom;
}

void Article::setPrixHt(float^ prixHT)
{
    this->m_prixHt = prixHT;
}

void Article::setStock(int^ stock)
{
    this->stock = stock;
}

void Article::setPrixAchat(float^ prix)
{
    this->m_prixAchat = prix;
}

void Article::setSeuil(int^ seuil)
{
    this->seuil = seuil;
}

void Article::setNature(Nature ^ nature)
{
    this->m_nature = nature;
}