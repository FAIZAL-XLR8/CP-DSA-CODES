#ifndef DELIVERY_ORDER_H
#define DELIVERY_ORDER_H

#include <string>
#include "Order.h"

using namespace std;

class DeliveryOrder : public Order {
private:
    string address;
public:
    DeliveryOrder() : Order() {
        address = "";
    }

    string getAddress() {
        return this->address;
    }

    void setUserAddress(const string &address) {
        this->address = address;
    }

    string getType() override {
        return "Delivery";
    }
};

#endif // DELIVERY_ORDER_H