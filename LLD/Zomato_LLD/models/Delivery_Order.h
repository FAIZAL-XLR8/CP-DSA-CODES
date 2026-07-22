#ifndef DELIVERY_ORDER_H
#define DELIVERY_ORDER_H
#include<bits/stdc++.h>
using namespace std;
class DeliveryOrder{
    private :
    string address;
    public :
    DeliveryOrder() address = "";
    string getAddress() return this -> address;
    void setUserAddress(const string &address)
    {
        this -> address = address;
    }
    string getType() override{
        return "Delivery";
    }
};
#endif