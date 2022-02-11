#include "ServiceArticle.h"

ServiceArticle::ServiceArticle()
{
    this->db = gcnew Bdd();
    this->requestArticleManager = gcnew RequestArticle();
    this->m_article = gcnew Article();
}

void ServiceArticle::supprimerArticle(int^ id)
{
    this->m_article->setId(id);
    this->requestArticleManager->setArticle(this->m_article);
    this->db->actionRows(this->requestArticleManager->deleteArticle());
}

void ServiceArticle::setArticle(Article^ a)
{
    this->m_article = a;
}

void ServiceArticle::setArticle(DataGridViewRow^ rowToEdit)
{    
    this->m_article->setId(Convert::ToInt32(rowToEdit->Cells[0]->Value));
    this->m_article->setReference(rowToEdit->Cells[1]->Value->ToString());
    this->m_article->setNom(rowToEdit->Cells[2]->Value->ToString());
    this->m_article->setPrixHt(Convert::ToSingle(rowToEdit->Cells[3]->Value));
    this->m_article->setPrixAchat(Convert::ToSingle(rowToEdit->Cells[4]->Value));

    Nature^ nature = gcnew Nature();
    nature->setId(Convert::ToInt32(rowToEdit->Cells[9]->Value));
    nature->setNom(rowToEdit->Cells[8]->Value->ToString());
    nature->setTVA(Convert::ToSingle(rowToEdit->Cells[5]->Value));

    this->m_article->setNature(nature);
    this->m_article->setStock(Convert::ToInt32(rowToEdit->Cells[6]->Value));
    this->m_article->setSeuil(Convert::ToInt32(rowToEdit->Cells[7]->Value));
}

Article^ ServiceArticle::getArticle()
{
    return this->m_article;
}

void ServiceArticle::displayArticleMainMenu(DataGridView^ data)
{
    DataSet^ dataset = this->db->getRows(this->requestArticleManager->selectArticlesMainMenu(), "RSL_ARTICLES");
    data->DataSource = dataset->Tables["RSL_ARTICLES"];
    data->Columns[0]->Visible = false;
    data->Columns[9]->Visible = false;
}

void ServiceArticle::modifierArticle()
{
    this->requestArticleManager->setArticle(this->m_article);
    this->db->actionRows(this->requestArticleManager->updateArticle());
}

void ServiceArticle::ajouterArticle()
{
    this->requestArticleManager->setArticle(this->m_article);
    this->db->actionRows(this->requestArticleManager->addArticle());
}

bool ServiceArticle::doesNatureExist(int^ id)
{
    DataRowCollection^ rows = this->db->getRows(this->requestArticleManager->getNatureById(id), "NAT")->Tables["NAT"]->Rows;
    if (rows->Count > 0) {
        return true;
    }
    else {
        return false;
    }
}

int^ ServiceArticle::createNature(String^ name)
{
    return this->db->actionRowId(this->requestArticleManager->addNature(name));
}

DataTable^ ServiceArticle::obtenirLesNaturesArticle()
{
    DataSet^ dataset = this->db->getRows(this->requestArticleManager->selectAllNature(), "RSL_NATURE");
    return dataset->Tables["RSL_NATURE"];
}

DataTable^ ServiceArticle::selectArticleByRef(String^ s)
{
    return this->db->getRows(this->requestArticleManager->selectArticleByRef(s), "ART")->Tables["ART"];
}

DataTable^ ServiceArticle::selectArticleByName(String^ s)
{
    return this->db->getRows(this->requestArticleManager->selectByNom(s), "ART")->Tables["ART"];
}

DataRowCollection^ ServiceArticle::obtenirInfosArticle()
{
    this->requestArticleManager->setArticle(this->m_article);
    DataSet^ dataset = this->db->getRows(this->requestArticleManager->selectInfoArticle(), "RSL_ARTICLE");
    return dataset->Tables["RSL_ARTICLE"]->Rows;
}
