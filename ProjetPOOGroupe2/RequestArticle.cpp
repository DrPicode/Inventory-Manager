#include "RequestArticle.h"

RequestArticle::RequestArticle()
{
	this->m_article = gcnew Article();
}

void RequestArticle::setArticle(Article^ a)
{
	this->m_article = a;
}

Article^ RequestArticle::getArticle()
{
	return this->m_article;
}

String^ RequestArticle::deleteArticle()
{
	return "DELETE FROM Article WHERE id_article=" + this->m_article->getId();
}

String^ RequestArticle::selectArticlesMainMenu()
{
	return "SELECT id_article, reference as 'Reference', article.nom AS 'Nom', ROUND(prix_de_vente_hors_taxe, 2) AS 'PUV HT', ROUND(prix_d_achat, 2) AS 'PUA HT', nature.TVA, stock AS 'Stock', seuil_reapprovisionement AS 'Seuil', Nature.nom as 'Categorie', nature.id_nature  FROM article LEFT JOIN nature ON article.id_nature = nature.id_nature";
}

String^ RequestArticle::selectAllNature()
{
	return "SELECT * FROM Nature";
}

String^ RequestArticle::addArticle()
{
	return "INSERT INTO Article (reference, nom, prix_de_vente_hors_taxe, stock, prix_d_achat, seuil_reapprovisionement, id_nature) VALUES('" + this->m_article->getReference() + "', '" + this->m_article->getNom() + "', '" + this->m_article->getPrixHt() + "', " + this->m_article->getStock() + ", '" + this->m_article->getPrixAchat() + "', " + this->m_article->getSeuil() + ", " + this->m_article->getNature()->getId() + ")";
}

String^ RequestArticle::updateArticle()
{
	return "UPDATE Article SET reference='" + this->m_article->getReference() + "', nom='" + this->m_article->getNom() + "', prix_de_vente_hors_taxe='" + this->m_article->getPrixHt()->ToString()->Replace(",", ".") + "', stock=" + this->m_article->getStock() + ", prix_d_achat='" + this->m_article->getPrixAchat()->ToString()->Replace(",", ".") + "', seuil_reapprovisionement=" + this->m_article->getSeuil() + ", id_nature = " + this->m_article->getNature()->getId() + " WHERE id_article=" + this->m_article->getId();
}

String^ RequestArticle::selectInfoArticle()
{
	return "SELECT id_article, reference, article.nom, article.prix_de_vente_hors_taxe, nature.nom as Nature, TVA FROM article LEFT JOIN nature ON article.id_nature = nature.id_nature WHERE reference='" + this->m_article->getReference() + "';";
}

String^ RequestArticle::selectArticleByRef(String^ s)
{
	return "SELECT id_article, reference, article.nom AS 'Nom', prix_de_vente_hors_taxe AS 'PUV HT', prix_d_achat AS 'PUA HT', nature.TVA, stock AS 'Stock', seuil_reapprovisionement AS 'Seuil', Nature.nom as 'Categorie', nature.id_nature  FROM article LEFT JOIN nature ON article.id_nature = nature.id_nature WHERE reference='" + s + "'";
}

String^ RequestArticle::selectByNom(String^ s)
{
	return "SELECT id_article, reference, article.nom AS 'Nom', prix_de_vente_hors_taxe AS 'PUV HT', prix_d_achat AS 'PUA HT', nature.TVA, stock AS 'Stock', seuil_reapprovisionement AS 'Seuil', Nature.nom as 'Categorie', nature.id_nature  FROM article LEFT JOIN nature ON article.id_nature = nature.id_nature WHERE article.nom LIKE '" + s +"%'";
}

String^ RequestArticle::getNatureById(int^ i)
{
	return "SELECT * FROM Nature WHERE id_nature = " + i;
}

String^ RequestArticle::addNature(String^ name)
{
	return "INSERT INTO Nature OUTPUT Inserted.id_nature VALUES('" + name + "', 20)";
}
