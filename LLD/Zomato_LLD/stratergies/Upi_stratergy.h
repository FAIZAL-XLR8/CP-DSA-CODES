#ifndef UPI_H
#define UPI_H

#include <iostream>
#include "PaymentStratergy.h"

using namespace std;

class UpiPaymentStrategy : public PaymentStratergy {
public:
    void pay(double total) override {
        cout << "Paid a total amount of " << total << " using UPI" << endl;
    }
};

using UPI_Stratergy = UpiPaymentStrategy;

#endif // UPI_H