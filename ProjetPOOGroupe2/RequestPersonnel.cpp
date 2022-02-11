#include "RequestPersonnel.h"

RequestPersonnel::RequestPersonnel()
{

}

int^ RequestPersonnel::getId()
{
    return this->m_id;
}

Personnel^ RequestPersonnel::getPersonnel()
{
    return this->m_personnel;
}

void RequestPersonnel::setId(int^ i)
{
    this->m_id = i;
}

void RequestPersonnel::setPersonnel(Personnel^ p)
{
    this->m_personnel = p;
}

String^ RequestPersonnel::insert()
{
    return "INSERT INTO Personnel (nom, prenom, sex, id_adresse, id_date, id_date_DateEmbauche) VALUES('" + this->getPersonnel()->getNom() + "' ,'" + this->getPersonnel()->getPrenom() + "' ,'" + this->getPersonnel()->getSex() + "' ," + this->getPersonnel()->getAdresse()->getId() + "," + this->getPersonnel()->getDateNaissance()->getIdDate() + "," + this->getPersonnel()->getDateEmbauche()->getIdDate() + "); ";
}

String^ RequestPersonnel::setAdresse()
{
    throw gcnew System::NotImplementedException();
    // TODO: insérer une instruction return ici
}

String^ RequestPersonnel::insertBirthDate()
{
    return "INSERT INTO Date(date) OUTPUT Inserted.id_date VALUES ('" + this->getPersonnel()->getDateNaissance()->getSqlDate() + "')";
}

String^ RequestPersonnel::deletePersonnel()
{
    return "DELETE FROM Personnel WHERE id_personnel=" + this->m_personnel->getId();
}

String^ RequestPersonnel::selectPersonnelMainMenu()
{
    return "SELECT id_personnel, nom, prenom, sex, Adresse.id_adresse, date_naissance, date_embauche, number, rue, id_ville FROM (SELECT id_personnel, nom, prenom, sex, id_adresse, date_naissance, date as date_embauche FROM (SELECT id_personnel, nom, prenom, sex, id_adresse, date AS date_naissance, id_date_DateEmbauche FROM Personnel LEFT JOIN Date ON Personnel.id_date = Date.id_date) as tab LEFT JOIN Date ON id_date_DateEmbauche = Date.id_date) as tab2 LEFT JOIN Adresse ON Adresse.id_adresse = tab2.id_adresse;";
}
