
#include <iostream>
#include "RecordStore.h"


int main()
{
    RecordStore store1("name1", "address1", 10);
    RecordStore store2("name2", "address2", 20);
    cout << store1.get_name() << " " << store1.get_address() << " " << store1.get_sales() << endl;
    cout << store2.get_name() << " " << store2.get_address() << " " << store2.get_sales() << endl;

    return 0;
}
