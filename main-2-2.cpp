
#include <iostream>
#include "RecordStore.h"
#include "Amoeba.h"
#include "AmoebaTickets.h"


int main()
{
    RecordStore store1("name1", "address1", 10);
    RecordStore store2("name2", "address2", 20);
    cout << store1.get_name() << " " << store1.get_address() << " " << store1.get_sales() << endl;
    cout << store2.get_name() << " " << store2.get_address() << " " << store2.get_sales() << endl;

    Amoeba a1("address3");
    cout << a1.get_storeID() << " " << a1.get_amoebaBranch() << endl;
    Amoeba a2("address4");
    cout << a2.get_storeID() << " " << a2.get_amoebaBranch() << endl;

    AmoebaTickets at1("atname1");
    at1.sellTicket();
    cout << at1.get_ticketsSold() << endl;
    at1.sellTicket();
    cout << at1.get_ticketsSold() << endl;

    return 0;
}
