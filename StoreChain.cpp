#include "StoreChain.h"

StoreChain::StoreChain()
{
	AmoebaTickets* at1 = new AmoebaTickets("Store1");
	Amoeba* a2 = new Amoeba("Perth");
	Amoeba* a3 = new Amoeba("Adelaide");
	Amoeba* a4 = new Amoeba("Darwin");
	AmoebaTickets* at5 = new AmoebaTickets("Store2");
	this->rs[0] = at1;
	this->rs[1] = a2;
	this->rs[2] = a3;
	this->rs[3] = a4;
	this->rs[4] = at5;
}

RecordStore** StoreChain::get_chain()
{
	return this->rs;
}
