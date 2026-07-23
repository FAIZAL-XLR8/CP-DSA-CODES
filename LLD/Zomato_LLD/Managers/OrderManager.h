#ifndef ORDER_MANAGER_H
#define ORDER_MANAGER_H

#include <vector>
#include "../models/Order.h"

using namespace std;

class OrderManager {
private:
    vector<Order*> order_lists;
    static OrderManager* instance;
    OrderManager() = default;

public:
    OrderManager(const OrderManager&) = delete;
    OrderManager& operator=(const OrderManager&) = delete;

    static OrderManager* getInstance() {
        return instance;
    }

    void addOrder(Order* order) {
        order_lists.push_back(order);
        cout << "added order with id : " << order -> getOrderId() << endl;
    }

    vector<Order*> getAllOrders() {
        return order_lists;
    }
};

OrderManager* OrderManager::instance = new OrderManager();

#endif // ORDER_MANAGER_H