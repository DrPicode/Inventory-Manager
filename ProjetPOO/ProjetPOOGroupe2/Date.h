#pragma once
#include <ctime>

using namespace System;

ref class Date
{
private:
	int^ m_idDate;
	DateTime^ m_date;
public:
	Date(DateTime^ d);
	Date();

	int^ getIdDate();
	DateTime^ getDate();
	String^ getSqlDate();

	void setIdDate(int^ i);
};

