#include "RecordStore.h"

RecordStore::RecordStore()
{

}

RecordStore::RecordStore(string n, string a, int s)
{
	this->name = n;
	this->address = a;
	this->sales = s;
}

void RecordStore::set_address(string a)
{
	this->address = a;
}

string RecordStore::get_address()
{
	return this->address;
}

void RecordStore::set_name(string n)
{
	this->name = n;
}

string RecordStore::get_name()
{
	return this->name;
}

void RecordStore::set_sales(int s)
{
	this->sales = s;
}

int RecordStore::get_sales()
{
	return this->sales;
}

int RecordStore::get_excessSales()
{
	return 0;
}
