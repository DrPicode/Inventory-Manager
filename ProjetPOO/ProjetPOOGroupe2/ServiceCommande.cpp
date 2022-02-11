#include "ServiceCommande.h"

ServiceCommande::ServiceCommande()
{
    this->db = gcnew Bdd();
    this->m_commande = gcnew Commande();
    this->requestCommandeManager = gcnew RequestCommande();
    this->requestAdresseManager = gcnew RequestAdresse();
    this->requestDateManager = gcnew RequestDate();
    this->requestPayementManager = gcnew RequestPayement();
}

int ^ ServiceCommande::getId()
{
    return this->m_id;
}

Commande ^ ServiceCommande::getCommande()
{
    return this->m_commande;
}

void ServiceCommande::setId(int^ id)
{
    this->m_id = id;
}

void ServiceCommande::setCommande(Commande^ commande)
{
    this->m_commande = commande;
}

void ServiceCommande::setCommande(DataGridViewRow^ rowToEdit)
{
    this->m_commande->setIdCommande(Convert::ToInt32(rowToEdit->Cells[0]->Value));
}

void ServiceCommande::supprimerCommande(int^ id)
{
    this->m_commande->setIdCommande(id);
    this->requestCommandeManager->setCommande(this->m_commande);
    this->db->actionRows(this->requestCommandeManager->deleteCommande());
}

int^ ServiceCommande::ajouterCommande(Commande^ c)
{
    this->m_commande = c;
    this->requestCommandeManager->setCommande(this->m_commande);
    return this->db->actionRowId(this->requestCommandeManager->insert());
}

void ServiceCommande::displayCommandeMainMenu(DataGridView^ data)
{
    DataSet^ dataset = this->db->getRows(this->requestCommandeManager->selectCommandesMainMenu(), "RSL_CMDS");
    data->DataSource = dataset->Tables["RSL_CMDS"];
    data->Columns[0]->Visible = false;
    data->Columns[2]->Visible = false;
    data->Columns[3]->Visible = false;
    data->Columns[4]->Visible = false;
}

int^ ServiceCommande::ajouterAdresse(Adresse^ a)
{
    this->requestAdresseManager->setAdressse(a);
    return this->db->actionRowId(this->requestAdresseManager->insert());
}

int^ ServiceCommande::ajouterDate(Date^ a)
{
    this->requestDateManager->setDate(a);
    return this->db->actionRowId(this->requestDateManager->insert());
}

int^ ServiceCommande::getLastId()
{
    DataSet^ data = this->db->getRows(this->requestCommandeManager->getLastId(), "RSL_COMMANDE");
    int i = 0;
    if (data->Tables["RSL_COMMANDE"]->Rows->Count > 0) {
        DataRow^ r = data->Tables["RSL_COMMANDE"]->Rows[0];
        i = Convert::ToInt32(r[0]);
    }
    else {
        i = 1;
    }
    return i;
}

void ServiceCommande::addArticle(DataGridViewRow^ a)
{
    this->requestCommandeManager->setCommande(this->m_commande);
    this->db->actionRows(this->requestCommandeManager->addArticle(a));
}

void ServiceCommande::ajouterPayement(Payement^ p)
{
    this->requestPayementManager->setPayement(p);
    this->requestDateManager->setDate(p->getDate());
    int^ i = this->db->actionRowId(this->requestDateManager->insert());
    p->getDate()->setIdDate(i);
    this->db->actionRows(this->requestPayementManager->insert());
}

DataTable^ ServiceCommande::getPayements(Payement^ p)
{
    this->requestPayementManager->setPayement(p);
    return this->db->getRows(this->requestPayementManager->getAllPayement(), "RSL_PAY")->Tables["RSL_PAY"];
}

DataTable^ ServiceCommande::selectCommandeByRef(String^ r)
{
    return this->db->getRows(this->requestCommandeManager->selectCommandeByRef(r), "CMD")->Tables["CMD"];
}

DataRowCollection^ ServiceCommande::getArticlesOfCommande()
{
    this->requestCommandeManager->setCommande(this->m_commande);
    return this->db->getRows(this->requestCommandeManager->getArticlesOfCommande(), "RSL_ARTICLES")->Tables["RSL_ARTICLES"]->Rows;
}

DataRow^ ServiceCommande::getCommandeById()
{
    this->requestCommandeManager->setCommande(this->m_commande);
    return ((DataRowCollection^)this->db->getRows(this->requestCommandeManager->getCommandeById(), "RSL_CMD")->Tables["RSL_CMD"]->Rows)[0];
}
