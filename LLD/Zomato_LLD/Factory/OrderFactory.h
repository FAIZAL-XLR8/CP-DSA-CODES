#ifndef ORDER_FACTORY_H
#define ORDER_FACTORY_H

#include <string>
#include "models/Order.h"
#include "models/User.h"
#include "models/Resturant.h"
#include "stratergies/PaymentStratergy.h"

using namespace std;

class OrderFactory {
public:
    virtual Order* createOrder(User* user, Resturant* resturant, PaymentStratergy* paymentstratergy, double total, string type) = 0;
    virtual ~OrderFactory() = default;
};

#endif // ORDER_FACTORY_H