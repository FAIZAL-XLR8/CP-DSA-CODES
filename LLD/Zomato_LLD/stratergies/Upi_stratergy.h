#ifndef UPI_H
#define UPI_H
#include <bits/stdc++.h>
using namespace std;
class UPI_Stratergy{
    pribvate :
    User* user;
    double total;
    Resturant* resturant;
    vector<MenuItem*> items;
    public : 
    void pay(double total) override {
  
        cout <<"paid a total amount of\n" << total << "Using UPI" << endl;
    }
};
#endif