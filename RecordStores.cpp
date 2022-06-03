#include "RecordStores.h"



void RecordStores::sort(Amoeba** store, int n)
{
    bool flag = true;
    int begin = 0;
    int finish = n - 1;
    while (flag)
    {
        flag = false;
        for (int i = begin; i < finish; i++)
        {
            Amoeba* ai0 = store[i];
            Amoeba* ai1 = store[i+1];
            int sid0 = ai0->get_storeID();
            int sid1 = ai1->get_storeID();
            if (sid0 > sid1) {
                swap(store[i], store[i + 1]);
                flag = true;
            }
        }
        if (!flag)
        {
            break;
        }
        flag = false;
        finish--;

        for (int i = finish - 1; i >= begin; i--)
        {
            Amoeba* ai0 = store[i];
            Amoeba* ai1 = store[i + 1];
            int sid0 = ai0->get_storeID();
            int sid1 = ai1->get_storeID();

            if (sid0 > sid1)
            {
                swap(store[i], store[i + 1]);
                flag = true;
            }
        }
        begin++;
    }
}
