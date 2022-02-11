#include "RequestClient.h"

RequestClient::RequestClient()
{
}

int^ RequestClient::getId()
{
    return this->m_id;
}

Client^ RequestClient::getClient()
{
    return this->m_client;
}

void RequestClient::setId(int^ i)
{
    this->m_id = i;
}

void RequestClient::setClient(Client^ c)
{
    this->m_client = c;
}

String^ RequestClient::insert()
{
    return "INSERT INTO Client(nom, prenom, id_date) OUTPUT Inserted.id_client VALUES('" + this->m_client->getNom() + "', '" + this->m_client->getPrenom() + "', " + this->m_client->getIdDate() + ");";
}

String^ RequestClient::deleteClient()
{
    return "DELETE FROM Client WHERE id_client=" + this->m_client->getId();
}

String^ RequestClient::setAdresse()
{
    return "INSERT INTO habite(id_client, id_adresse) VALUES (" + this->getClient()->getId() + "," + this->getClient()->getAdresse()->getId() + ")";
}

String^ RequestClient::update()
{
    return "UPDATE Client SET nom='" + this->m_client->getNom() + "', prenom='" + this->m_client->getPrenom() + "' WHERE id_client=" + this->m_client->getId();
}

String^ RequestClient::selectById(int^ id)
{
    return "SELECT id_client AS 'Numero Client', nom AS 'Nom client', prenom AS 'Prenom Client', id_adresse, number AS 'Numero de rue', rue AS 'Rue', id_ville, code_postal AS 'Code Postal', ville AS 'Ville', Date.id_date, date AS 'Date de Naissance' FROM (SELECT id_client, nom, prenom, id_adresse, number, rue, Ville.id_ville, code_postal, ville, id_date FROM (SELECT id_client, nom, prenom, Adresse.id_adresse, number, rue, id_ville, id_date FROM Adresse RIGHT JOIN (SELECT Client.id_client, nom, prenom, id_date, id_adresse FROM Client RIGHT JOIN habite ON habite.id_client = Client.id_client) AS tab1 ON tab1.id_adresse = Adresse.id_adresse) as tab2 LEFT JOIN Ville on Ville.id_ville = tab2.id_ville) AS tab3 LEFT JOIN Date ON Date.id_date = tab3.id_date WHERE id_client=" + id;
}

String^ RequestClient::selectByName(String^ name)
{
    return "SELECT id_client AS 'Numero Client', nom AS 'Nom client', prenom AS 'Prenom Client', id_adresse, number AS 'Numero de rue', rue AS 'Rue', id_ville, code_postal AS 'Code Postal', ville AS 'Ville', Date.id_date, date AS 'Date de Naissance' FROM (SELECT id_client, nom, prenom, id_adresse, number, rue, Ville.id_ville, code_postal, ville, id_date FROM (SELECT id_client, nom, prenom, Adresse.id_adresse, number, rue, id_ville, id_date FROM Adresse RIGHT JOIN (SELECT Client.id_client, nom, prenom, id_date, id_adresse FROM Client RIGHT JOIN habite ON habite.id_client = Client.id_client) AS tab1 ON tab1.id_adresse = Adresse.id_adresse) as tab2 LEFT JOIN Ville on Ville.id_ville = tab2.id_ville) AS tab3 LEFT JOIN Date ON Date.id_date = tab3.id_date WHERE nom='" + name + "'";
}

String^ RequestClient::selectClientForMainMenu()
{
    return "SELECT id_client AS 'Numero Client', nom AS 'Nom client', prenom AS 'Prenom Client', id_adresse, number AS 'Numero de rue', rue AS 'Rue', id_ville, code_postal AS 'Code Postal', ville AS 'Ville', Date.id_date, date AS 'Date de Naissance' FROM (SELECT id_client, nom, prenom, id_adresse, number, rue, Ville.id_ville, code_postal, ville, id_date FROM (SELECT id_client, nom, prenom, Adresse.id_adresse, number, rue, id_ville, id_date FROM Adresse RIGHT JOIN (SELECT Client.id_client, nom, prenom, id_date, id_adresse FROM Client RIGHT JOIN habite ON habite.id_client = Client.id_client) AS tab1 ON tab1.id_adresse = Adresse.id_adresse) as tab2 LEFT JOIN Ville on Ville.id_ville = tab2.id_ville) AS tab3 LEFT JOIN Date ON Date.id_date = tab3.id_date;";
}

String^ RequestClient::getClientById()
{
    return "SELECT * FROM Client WHERE id_client=" + this->m_client->getId();
}

String^ RequestClient::getAllAboutClient()
{
    return "SELECT Client.id_client, nom, prenom, id_adresse, number, rue, ville, code_postal, id_ville FROM Client RIGHT JOIN(SELECT id_client, id_adresse, number, rue, ville, code_postal, Ville.id_ville FROM(SELECT id_client, Adresse.id_adresse, number, rue, id_ville FROM habite LEFT JOIN Adresse ON Adresse.id_adresse = habite.id_adresse WHERE id_client = " + this->m_client->getId() + ") AS tab LEFT JOIN Ville ON tab.id_ville = Ville.id_ville) AS tab2 ON Client.id_client = tab2.id_client;";
}
