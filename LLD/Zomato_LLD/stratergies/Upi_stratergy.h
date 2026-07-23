#ifndef UPI_H
#define UPI_H
#include <bits/stdc++.h>
using namespace std;
class UPI_Stratergy : public PaymentStratergy{
    private :
    double total;
    public : 
    void pay(double total) override {
  
        cout <<"paid a total amount of\n" << total << "Using UPI" << endl;
    }
};
#endif