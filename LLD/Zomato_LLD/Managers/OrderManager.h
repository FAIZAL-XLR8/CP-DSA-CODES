#ifndef ORDER_MANAGER_H
#define ORDER_MANAGER_H
#include <bits/stdc++.h>
using namespace std;
class OrderManager{
    
    private :
    vector <Order*> order_lists;
    static OrderManager* instance;
    public :
    static OrderManager* getInstance()
    {
        return instance;
    }
    void addOrder(Order* order)
    {
        order_lists.push_back(order);
    }
    vector<Order*> getAllOrders()
    {
        return order_lists;
    }
};
OrderManager* OrderManager :: instance = new OrderManager(); // this is eager initialisation
#endif