#ifndef ORDER_H
#define ORDER_H

#include <iostream>
#include <vector>
#include <string>
#include "User.h"
#include "Resturant.h"
#include "MenuItem.h"
#include "../stratergies/PaymentStratergy.h"

using namespace std;

class Order {
private:
    User* user;
    int id;
    Resturant* rest;
    vector<MenuItem*> items;
    PaymentStratergy* p;
    double total;
    static int curr_id;

public:
    Order() {
        this->id = ++curr_id;
        this->user = nullptr;
        this->rest = nullptr;
        this->p = nullptr;
        this->total = 0.0;
    }

    virtual ~Order() {
        delete p;
        items.clear();
        cout << "Order destructor called\n";
    }

    double getCost() {
        double tot = 0.0;
        for (auto &item : items) {
            tot += item->getPrice();
        }
        return tot;
    }

    bool processPayment() {
        if (p) {
            p->pay(getCost());
            return true;
        }
        return false;
    }

    int getOrderId() { return id; }
    User* getUser() { return user; }
    Resturant* getRest() { return rest; }
    vector<MenuItem*> getItems() { return items; }
    PaymentStratergy* getPaymentStratergy() { return p; }

    void setPaymentStratergy(PaymentStratergy* p) {
        this->p = p;
    }

    void setUser(User* user) {
        this->user = user;
    }

    void setItems(vector<MenuItem*> items) {
        this->items = items;
    }

    void setResturant(Resturant* rest) {
        this->rest = rest;
    }

    virtual string getType() = 0;

    void setTotal(double total) {
        this->total = total;
    }
};

int Order::curr_id = 0;

#endif // ORDER_H