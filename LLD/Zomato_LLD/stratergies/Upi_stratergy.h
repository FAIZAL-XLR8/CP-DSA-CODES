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
    void pay(User* user, double total, Resturant* resturant, vector<MenutItem*>items) override {
        this-> user = user;
        this-> total = total;
        this-> resturant = resturant;
        this-> items = items;
        cout << "payment for \n";
        for (int i = 0; i < items.size(); ++i)
        {
            cout << (items[i])->getName() <<" ";
        }
        cout << endl;
        cout <<"paid a total amount of\n" << total << endl;
    }
};
#endif