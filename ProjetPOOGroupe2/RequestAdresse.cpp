#include "RequestAdresse.h"

RequestAdresse::RequestAdresse()
{
	this->m_adresse = gcnew Adresse();
}

void RequestAdresse::setAdressse(Adresse^ a)
{
	this->m_adresse = a;
}

Adresse^ RequestAdresse::getAdresse()
{
	return this->m_adresse;
}

String^ RequestAdresse::update()
{
	return "UPDATE Adresse SET number=" + this->m_adresse->getNumeroRue() + ", rue='" + this->m_adresse->getRue() + "', id_ville=" + this->m_adresse->getVille()->getId() + " WHERE id_adresse=" + this->m_adresse->getId();
}

String^ RequestAdresse::insert()
{
	return "INSERT INTO Adresse OUTPUT Inserted.id_adresse VALUES('" + this->m_adresse->getNumeroRue() + "', '" + this->m_adresse->getRue() + "', " + this->m_adresse->getVille()->getId() + ")";
}

String^ RequestAdresse::getCities()
{
	return "SELECT * FROM Ville";
}

String^ RequestAdresse::getAdresseById()
{
	return "SELECT * FROM Adresse WHERE id_adresse=" + this->m_adresse->getId();
}

