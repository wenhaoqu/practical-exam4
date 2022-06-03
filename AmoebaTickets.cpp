#include "AmoebaTickets.h"



AmoebaTickets::AmoebaTickets()
{
	this->ticketsSold = 0;
}

void AmoebaTickets::sellTicket()
{
	this->ticketsSold++;
}

int AmoebaTickets::get_ticketsSold()
{
	return this->ticketsSold;
}
