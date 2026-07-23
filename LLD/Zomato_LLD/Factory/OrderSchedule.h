#ifndef ORDER_SCHEDULE_H
#define ORDER_SCHEDULE_H
#include <bits/stdc++.h>
using namespace std;
class OrderSchedule : public Order{
    public :
    Order* createOrder(User* user, Resturant* resturant, PaymentStratergy* paymentstratergy, double total, string type)
    {
        Order* order = nullptr;
        if (type == "Delivery")
        {
            order = new Delivery();
            order -> setUserAddress(user -> getAddress());
        }
        else if (type == "Pickup"){
            order = new Pickup();
            order -> setResturantAddress(resturant -> getAddress());
        }
        vector<MenuItem*>items = user -> getCart() -> getItems();
        order -> setItems(items);
        order -> setResturant(resturant);
        order -> setPaymentStratergy(paymentstratergy);
        order -> setUser(user);
        order -> setTotal(total);
        return order;
    }
};
#endif