#ifndef ORDER_SCHEDULE_H
#define ORDER_SCHEDULE_H

#include <vector>
#include <string>
#include "Factory/OrderFactory.h"
#include "models/Delivery_Order.h"
#include "models/Pickup_delivery.h"

using namespace std;

class OrderSchedule : public OrderFactory {
public:
    Order* createOrder(User* user, Resturant* resturant, PaymentStratergy* paymentstratergy, double total, string type) override {
        Order* order = nullptr;
        if (type == "Delivery") {
            DeliveryOrder* d_order = new DeliveryOrder();
            d_order->setUserAddress(user->getAddress());
            order = d_order;
        } else if (type == "Pickup") {
            PickupOrder* p_order = new PickupOrder();
            p_order->setResturantAddress(resturant->getLocation());
            order = p_order;
        } else {
            return nullptr;
        }

        vector<MenuItem*> items = user->getCart()->getItems();
        order->setItems(items);
        order->setResturant(resturant);
        order->setPaymentStratergy(paymentstratergy);
        order->setUser(user);
        order->setTotal(total);
        return order;
    }
};

#endif // ORDER_SCHEDULE_H