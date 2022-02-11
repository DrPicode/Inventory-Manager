#pragma once

using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;

ref class Bdd
{
private:
	String^ request;
	String^ connection_string;
	SqlConnection^ sql_connexion;
	SqlCommand^ sql_command;
	SqlDataAdapter^ sql_data_adpater;
	DataSet^ dataset;
public:
	Bdd(void);
	DataSet^ getRows(String^ request, String^ dataTableName);
	void actionRows(String^ request);
	int^ actionRowId(String^ request);
};

