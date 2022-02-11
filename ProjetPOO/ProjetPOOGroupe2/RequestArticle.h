#pragma once
#include "Article.h"

ref class RequestArticle
{
private:
	Article^ m_article;
public:
	RequestArticle();

	void setArticle(Article^ a);
	Article^ getArticle();

	String^ deleteArticle();
	String^ selectArticlesMainMenu();
	String^ selectAllNature();
	String^ addArticle();
	String^ updateArticle();
	String^ selectInfoArticle();
	String^ selectArticleByRef(String^ s);
	String^ selectByNom(String^ s);
	String^ getNatureById(int^ id);
	String^ addNature(String^ name);
};

