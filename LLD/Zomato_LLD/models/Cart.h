#ifndef CART_H
#define CART_H

#include <iostream>
#include <vector>
#include "MenuItem.h"
#include "Resturant.h"

using namespace std;

class Cart {
private:
    Resturant* resturant;
    vector<MenuItem*> items;

public:
    Cart() {
        resturant = nullptr;
    }

    void addItem(MenuItem* item) {
        if (!resturant) {
            cerr << "Cart: Set a restaurant before adding items." << endl;
            return;
        }
        items.push_back(item);
    }

    double getTotalCost() const {
        double sum = 0;
        for (const auto& it : items) {
            sum += it->getPrice();
        }
        return sum;
    }

    bool isEmpty() {
        return (!resturant || items.empty());
    }

    void clear() {
        items.clear();
        resturant = nullptr;
    }

    // Getters and Setters
    void setRestaurant(Resturant* r) {
        resturant = r;
    }

    Resturant* getRestaurant() const {
        return resturant;
    }

    const vector<MenuItem*>& getItems() const {
        return items;
    }
};

#endif // CART_H