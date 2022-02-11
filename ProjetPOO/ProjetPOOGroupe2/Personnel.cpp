#include "Personnel.h"

Personnel::Personnel()
{
}

Personnel::Personnel(String^ n, String^ p, Adresse^ a, Date^ d1, Date^ d2, String^ s) : Personne(n, p, a)
{
    this->m_dateNaissance = d1;
    this->m_dateEmbauche = d2;
    this->m_sex = s;
}

Date^ Personnel::getDateEmbauche()
{
    return this->m_dateEmbauche;
}

void Personnel::setDateEmbauche(Date^ d)
{
    this->m_dateEmbauche = d;
}

Date^ Personnel::getDateNaissance()
{
    return this->m_dateNaissance;
}

void Personnel::setDateNaissance(Date^ d)
{
    this->m_dateNaissance = d;
}

String^ Personnel::getSex()
{
    return this->m_sex;
}

void Personnel::setSex(String^ s)
{
    this->m_sex = s;
}
