#include "Date.h"

Date::Date(DateTime^ d)
{
	this->m_date = d;
}

Date::Date()
{
}

int^ Date::getIdDate()
{
	return this->m_idDate;
}

DateTime^ Date::getDate()
{
	return this->m_date;
}

String^ Date::getSqlDate()
{
	return this->m_date->ToString("yyyyMMdd");
}

void Date::setIdDate(int^ i)
{
	this->m_idDate = i;
}
