#ifndef PICKUP_ORDER_H
#define PICKUP_ORDER_H

#include <string>
#include "models/Order.h"

using namespace std;

class PickupOrder : public Order {
private:
    string resturantAddress;
public:
    PickupOrder() : Order() {
        resturantAddress = "";
    }

    void setResturantAddress(const string &resturant_address) {
        this->resturantAddress = resturant_address;
    }

    string getResturantAddress() {
        return this->resturantAddress;
    }

    string getType() override {
        return "Pickup";
    }
};

#endif // PICKUP_ORDER_H