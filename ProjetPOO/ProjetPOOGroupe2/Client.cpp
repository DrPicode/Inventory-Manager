#include "Client.h"

Client::Client()
{

}

Client::Client(String^ n, String^ p, Adresse^ a, int^ d): Personne(n, p, a)
{
	this->m_idDate = d;
}

Client::Client(int i, String^ n, String^ p, Adresse^ a, int^ d): Personne(i,n,p,a)
{
	this->m_idDate = d;
}

int^ Client::getIdDate()
{
	return this->m_idDate;
}

void Client::setIdDate(int^ t)
{
	this->m_idDate = t;
}
