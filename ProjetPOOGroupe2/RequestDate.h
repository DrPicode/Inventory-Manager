#pragma once
#include "Date.h"
ref class RequestDate
{
private:
	Date^ m_date;

public:
	RequestDate();

	void setDate(Date^ d);
	Date^ getDate();

	String^ insert();
};

