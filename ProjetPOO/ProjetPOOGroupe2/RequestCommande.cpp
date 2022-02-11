#include "RequestCommande.h"

RequestCommande::RequestCommande()
{
    this->m_commande = gcnew Commande();
}

void RequestCommande::setCommande(Commande^ c)
{
    this->m_commande = c;
}

Commande^ RequestCommande::getCommande()
{
    return this->m_commande;
}

String^ RequestCommande::deleteCommande()
{
    return "DELETE FROM Commande WHERE id_commande=" + this->m_commande->getIdCommande();
}

String^ RequestCommande::selectCommandesMainMenu()
{
    return "SELECT id_commande, reference, id_adresse_facturation, id_adresse_livraison, id_client, date_facturation, date as date_livraison FROM (SELECT id_commande, reference, id_adresse AS id_adresse_livraison, id_client, id_adresse_AdresseFacturation as id_adresse_facturation, date as date_facturation, id_date_DateLivraison FROM Commande LEFT JOIN Date ON Commande.id_date = Date.id_date) AS tab1 LEFT JOIN Date ON tab1.id_date_DateLivraison = Date.id_date;";
}

String^ RequestCommande::getLastId()
{
    return "SELECT id_commande FROM Commande ORDER BY id_commande DESC";
}

String^ RequestCommande::insert()
{
    return "INSERT INTO Commande(reference, id_adresse, id_client, id_adresse_AdresseFacturation, id_date, id_date_DateLivraison) OUTPUT Inserted.id_commande VALUES ('" + this->m_commande->getReference() + "', " + this->m_commande->getAdresseLivraison()->getId() + ", " + this->m_commande->getClient()->getId() + ", " + this->m_commande->getAdresseFacturation()->getId() + ", " + this->m_commande->getDateCommande()->getIdDate() + ", " + this->m_commande->getDateLivraison()->getIdDate() + ")";
}

String^ RequestCommande::addArticle(DataGridViewRow^ article)
{
    return "INSERT INTO Contient (id_article, id_commande, quantite, remise_article) VALUES (" + article->Cells[9]->Value + ", " + this->m_commande->getIdCommande() + ", " + article->Cells[2]->Value + ", " + article->Cells[4]->Value + ")";
}

String^ RequestCommande::selectCommandeByRef(String^ r)
{
    return "SELECT id_commande, reference, id_adresse_facturation, id_adresse_livraison, id_client, date_facturation, date as date_livraison FROM (SELECT id_commande, reference, id_adresse AS id_adresse_livraison, id_client, id_adresse_AdresseFacturation as id_adresse_facturation, date as date_facturation, id_date_DateLivraison FROM Commande LEFT JOIN Date ON Commande.id_date = Date.id_date) AS tab1 LEFT JOIN Date ON tab1.id_date_DateLivraison = Date.id_date WHERE reference='" + r + "'";
}

String^ RequestCommande::getArticlesOfCommande()
{
    return "SELECT article.id_article, id_commande, quantite, remise_article, reference FROM (SELECT * FROM contient WHERE id_commande = " + this->m_commande->getIdCommande() + ") as tab LEFT JOIN Article on article.id_article = tab.id_article;";
}

String^ RequestCommande::getCommandeById()
{
    return "SELECT * FROM Commande WHERE id_commande =" + this->m_commande->getIdCommande();
}
