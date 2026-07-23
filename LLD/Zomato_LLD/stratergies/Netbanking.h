#ifndef Netbanking_H
#define Netbanking_H
#include <bits/stdc++.h>
using namespace std;
class Netbanking_Stratergy : public PaymentStratergy{
    private :
    double total;
  
    public : 
    void pay( double total) override {
        cout <<"paid a total amount of\n" << total << "Using Netbanking" << endl;
    }
};
#endif