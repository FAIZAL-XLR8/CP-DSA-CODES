#ifndef ORDER_MANAGER_H
#define ORDER_MANAGER_H
#include <bits/stdc++.h>
using namespace std;
class OrderManager{
    private :
    vector <Order*> order_lists;
    public :
    void addOrder(Order* order)
    {
        order_lists.push_back(order);
    }
};
#endif