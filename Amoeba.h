#pragma once
#include "RecordStore.h"


class Amoeba :
    public RecordStore
{
public:
    Amoeba(string a) :RecordStore("Amoeba", a, 0)
    {
        storeID = amoebaBranch;
        amoebaBranch++;
    }; // creates address with a

    void set_storeID(int s);
    int get_storeID();
    void set_amoebaBranch(int a);
    int get_amoebaBranch();
    int get_excessSales();

private:
    int storeID;                 // unique id for the store
    static int amoebaBranch;
};

