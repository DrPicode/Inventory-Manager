#include "RequestDate.h"

RequestDate::RequestDate()
{
    this->m_date = gcnew Date();
}

void RequestDate::setDate(Date^ d)
{
    this->m_date = d;
}

Date^ RequestDate::getDate()
{
    return this->m_date;
}

String^ RequestDate::insert()
{
    return "INSERT INTO Date(date) OUTPUT Inserted.id_date VALUES('" + this->m_date->getSqlDate() + "')";
}
