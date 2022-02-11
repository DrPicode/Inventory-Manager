#pragma once
#include "Bdd.h"
#include "Article.h"
#include "RequestArticle.h"

using namespace System::Windows::Forms;

ref class ServiceArticle
{
private:
	RequestArticle^ requestArticleManager;
	Article^ m_article;
public:
	Bdd^ db;
	ServiceArticle();

	void supprimerArticle(int^ id);

	void setArticle(Article^ a);
	void setArticle(DataGridViewRow^ rowToEdit);
	Article^ getArticle();

	void displayArticleMainMenu(DataGridView^ data);
	void modifierArticle();
	void ajouterArticle();

	bool doesNatureExist(int^ id);

	int^ createNature(String^ name);

	DataTable^ obtenirLesNaturesArticle();
	DataTable^ selectArticleByRef(String^ s);
	DataTable^ selectArticleByName(String^ s);
	DataRowCollection^ obtenirInfosArticle();
};

