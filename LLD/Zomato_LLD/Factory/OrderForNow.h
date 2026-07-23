#ifndef ORDER_NOW
#define ORDER_NOW_H
#include <bits/stdc++.h>
using namespace std;
class OrderNow : public OrderFactory{
    public :
    Order* createOrder(User* user, Resturant* resturant, PaymentStratergy* paymentstratergy, double total, string type)
    {
        // since factory's work is to take the type AND RETURN THE EXACT OBJECT OF THE PRODUCT
        // type will say PICKUP PRODUCT OR THE DELIVERY PRODUCT
        Order* order = nullptr;
        if (type == "Delivery")
        {
            order = new Delivery();
            order -> setUserAddress (user -> getAddress());

        }
        else if (type == "Pickup")
        {
            // resturant adress
            order = new PickupOrder();
            order -> setResturantAddress(resturant -> getAddress());
        }
        else
        {
            return nullptr;
        }
        vector<MenuItem*> items = user -> getCart() -> getItems();
        order -> setItems(items);
        order -> setResturant(resturant);
        order -> setPaymentStratergy(paymentstratergy);
        order -> setUser(user);
        order -> setTotal(total);
        return order;
    }
};
#endif
