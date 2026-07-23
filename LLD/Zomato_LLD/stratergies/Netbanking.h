#ifndef NETBANKING_H
#define NETBANKING_H

#include <iostream>
#include "PaymentStratergy.h"

using namespace std;

class Netbanking_Stratergy : public PaymentStratergy {
public:
    void pay(double total) override {
        cout << "Paid a total amount of " << total << " using Netbanking" << endl;
    }
};

#endif // NETBANKING_H