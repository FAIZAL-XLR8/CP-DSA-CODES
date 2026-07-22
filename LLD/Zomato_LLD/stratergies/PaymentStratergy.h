#ifndef PAYMENT_STRATERGY_H
#define PAYMENT_STRATERGY_H
#include <bits/stdc++.h>
using namespace std;
class PaymentStratergy {
    virtual void pay(User* user, double total, Resturant* rest, vector<MenutItem*>items) = 0;
};
#endif