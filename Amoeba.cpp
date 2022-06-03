#include "Amoeba.h"

int Amoeba::amoebaBranch = 0;

Amoeba::Amoeba()
{
}

void Amoeba::set_storeID(int s)
{
	this->storeID = s;
}

int Amoeba::get_storeID()
{
	return this->storeID;
}

void Amoeba::set_amoebaBranch(int a)
{
	this->amoebaBranch = a;
}

int Amoeba::get_amoebaBranch()
{
	return this->amoebaBranch;
}

int Amoeba::get_excessSales()
{
	int s = get_sales();
	return s > 1000 ? s : 0;
}
