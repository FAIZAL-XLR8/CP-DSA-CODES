#ifndef ORDER_FACTORY_H
#define ORDER_FACTORY_H
#include <bits/stdc++.h>
using namespace std;
class OrderFactory{
    public :
    //factories work is to produce products
    virtual Order* createOrder(User* user, Resturant* resturant, PaymentStratergy* paymentstratergy, double total, string type) = 0;
};
#endif