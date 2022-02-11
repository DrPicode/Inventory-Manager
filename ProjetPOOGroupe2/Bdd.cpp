#include "Bdd.h"

Bdd::Bdd(void)
{
	this->connection_string = "Data Source=DESKTOP-LKRLBDJ\\MSSQL_MAXIME;Initial Catalog=DB_PROJET_POO;Persist Security Info=True;User ID=CNX_PROJET;Password=ProjetPoo";
	this->request = "Rien";

	this->sql_connexion = gcnew Data::SqlClient::SqlConnection(this->connection_string);
	this->sql_command = gcnew Data::SqlClient::SqlCommand(this->request, this->sql_connexion);
	this->sql_data_adpater = gcnew Data::SqlClient::SqlDataAdapter();
	this->dataset = gcnew Data::DataSet();

	this->sql_command->CommandType = System::Data::CommandType::Text;
}

DataSet^ Bdd::getRows(String^ request, String^ dataTableName)
{
	//this->dataset->Clear();
	DataSet^ dataset = gcnew DataSet();
	this->request = request;
	this->sql_command->CommandText = this->request;
	this->sql_data_adpater->SelectCommand = this->sql_command;
	this->sql_data_adpater->Fill(dataset, dataTableName);

	return dataset;
}

void Bdd::actionRows(String^ request)
{
	this->request = request;
	this->sql_command->CommandText = this->request;
	this->sql_data_adpater->SelectCommand = this->sql_command;
	this->sql_connexion->Open();
	this->sql_command->ExecuteNonQuery();
	this->sql_connexion->Close();
}

int^ Bdd::actionRowId(String^ request)
{
	int id;
	this->request = request;
	this->sql_command->CommandText = this->request;
	this->sql_connexion->Open();
	id = Convert::ToInt32(this->sql_command->ExecuteScalar());
	this->sql_connexion->Close();
	return id;
	
}
