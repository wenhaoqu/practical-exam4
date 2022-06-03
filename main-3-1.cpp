
#include <iostream>
#include "RecordStore.h"
#include "Amoeba.h"
#include "AmoebaTickets.h"
#include "StoreChain.h"


int main()
{
    StoreChain sc;
    RecordStore** rs = sc.get_chain();
    cout << rs[0]->get_name() << " " << rs[0]->get_address() << " " << rs[0]->get_sales() << endl;
    cout << rs[1]->get_name() << " " << rs[1]->get_address() << " " << rs[1]->get_sales() << endl;
    cout << rs[2]->get_name() << " " << rs[2]->get_address() << " " << rs[2]->get_sales() << endl;
    cout << rs[3]->get_name() << " " << rs[3]->get_address() << " " << rs[3]->get_sales() << endl;
    cout << rs[4]->get_name() << " " << rs[4]->get_address() << " " << rs[4]->get_sales() << endl;

    return 0;
}
