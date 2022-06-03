#pragma once
#include "Amoeba.h"


class AmoebaTickets :
    public Amoeba
{
public:
    AmoebaTickets();          // just use the corresponding base class constructor
    AmoebaTickets(string n) : Amoeba("")
    {
        set_name(n);
        set_sales(0);
        ticketsSold = 0;
    };  // creates the record store with name n 
                                  // also call the parent class constructor
                                  // with an empty address string.
              // and number of tickets sold so far should be initialised to zero

    void sellTicket();        // increments the number of tickets sold  
    int get_ticketsSold();        // gets the number of tickets sold

private:
    int ticketsSold;

};

