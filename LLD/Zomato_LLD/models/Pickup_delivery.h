#ifndef PICKUP_ORDER_H
#define PICKUP_ORDER_H
#include <bits/stdc++.h>
using namespace std;
class PickupOrder{
    private :
    string resturantAdress;
    public :
    PickupOrder() resturantAdress = "";
    void setResturantAddress(const string &resturant_address)
    {
        this -> resturant_address = resturant_address
    }
};
#endif