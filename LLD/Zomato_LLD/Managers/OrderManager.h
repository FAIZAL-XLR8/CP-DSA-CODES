#ifndef ORDER_MANAGER_H
#define ORDER_MANAGER_H

#include <vector>
#include "models/Order.h"

using namespace std;

class OrderManager {
private:
    vector<Order*> order_lists;
    OrderManager() = default;

public:
    // Delete copy constructor and assignment operator for Singleton
    OrderManager(const OrderManager&) = delete;
    OrderManager& operator=(const OrderManager&) = delete;

    static OrderManager* getInstance() {
        static OrderManager instance;
        return &instance;
    }

    void addOrder(Order* order) {
        order_lists.push_back(order);
    }

    vector<Order*> getAllOrders() {
        return order_lists;
    }
};

#endif // ORDER_MANAGER_H