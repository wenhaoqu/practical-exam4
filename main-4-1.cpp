
#include <iostream>
#include "RecordStore.h"
#include "Amoeba.h"
#include "AmoebaTickets.h"
#include "StoreChain.h"
#include "RecordStores.h"

int main()
{
    Amoeba a1("address1");
    cout << a1.get_storeID() << " " << a1.get_amoebaBranch() << endl;
    Amoeba a2("address2");
    cout << a2.get_storeID() << " " << a2.get_amoebaBranch() << endl;
    Amoeba a3("address3");
    cout << a3.get_storeID() << " " << a3.get_amoebaBranch() << endl;
    Amoeba a4("address4");
    cout << a4.get_storeID() << " " << a4.get_amoebaBranch() << endl;
    Amoeba a5("address5");
    cout << a5.get_storeID() << " " << a5.get_amoebaBranch() << endl;

    Amoeba* pa[5] = { &a2, &a3, &a1, &a4, &a5 };
    RecordStores::sort(pa, 5);
    
    for (int i = 0; i < 5; i++)
    {
        cout << pa[i]->get_storeID() << endl;
    }
    return 0;
}
