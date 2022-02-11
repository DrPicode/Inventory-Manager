#include "RequestStatistiques.h"

RequestStatistiques::RequestStatistiques()
{
}

String^ RequestStatistiques::getValeurStock()
{
    return "SELECT ROUND(SUM(prix_d_achat * stock), 2) AS 'valeur_stock' FROM article; ";
}

String^ RequestStatistiques::getPanierMoyen()
{
    return "SELECT ROUND(AVG([prix total]), 2) as [moyenne panier] from(SELECT SUM(prix_de_vente_hors_taxe * (TVA / 100 + 1) * (1 - remise_article / 100) * quantite) AS 'prix total', id_commande FROM( SELECT id_commande, quantite, remise_article, TVA, prix_de_vente_hors_taxe FROM contient INNER JOIN(SELECT TVA, prix_de_vente_hors_taxe, id_article FROM article INNER JOIN nature ON(article.id_nature = nature.id_nature)) AS r	ON contient.id_article = r.id_article) AS tab GROUP BY(id_commande)) as[moyenne panier]; ";
}

String^ RequestStatistiques::getSousSeuil()
{
    return "SELECT * FROM sous_seuil";
}

String^ RequestStatistiques::getValeurCommerciale()
{
    return "SELECT ROUND(SUM(prix_de_vente_hors_taxe * stock), 2) AS panier_moyen FROM article LEFT JOIN nature ON nature.id_nature = article.id_nature;";
}

String^ RequestStatistiques::getMostArticle()
{
    return "SELECT [total ventes], nom  FROM (select TOP 10 SUM(quantite) as [total ventes], id_article from contient group by (id_article) ORDER BY [total ventes] DESC) as tab INNER JOIN (SELECT nom, id_article from article) as tab2 on tab.id_article=tab2.id_article";
}

String^ RequestStatistiques::getLessArticle()
{
    return "SELECT[total ventes], nom  FROM(select TOP 10 SUM(quantite) as[total ventes], id_article from contient group by(id_article) ORDER BY[total ventes] ASC) as tab INNER JOIN(SELECT nom, id_article from article) as tab2 on tab.id_article = tab2.id_article";
}

String^ RequestStatistiques::getCAMois(int^ year, int^ month)
{
    return "EXEC chiffre_affaire_mois " + year + ", " + month;
}

String^ RequestStatistiques::getSimu(int^ tva1, int^ tv2, int^ tv3, double^ marge, int^ remise, int^ demarque)
{
    return "EXEC simulation_commercial " + tva1 + "," + tv2 + "," + tv3 + "," + marge->ToString()->Replace(",", ".") + "," + remise + "," + demarque;
}
