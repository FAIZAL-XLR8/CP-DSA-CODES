#ifndef ZOMATO_H
#define ZOMATO_H

#include <iostream>
#include <vector>
#include <string>

#include "models/User.h"
#include "models/Resturant.h"
#include "models/MenuItem.h"
#include "models/Cart.h"
#include "models/Order.h"
#include "models/Delivery_Order.h"
#include "models/Pickup_delivery.h"
#include "stratergies/PaymentStratergy.h"
#include "Factory/OrderFactory.h"
#include "Factory/OrderForNow.h"
#include "Factory/OrderSchedule.h"
#include "Factory/NotificationFactory.h"
#include "Managers/OrderManager.h"
#include "Managers/ResturantManager.h"

using namespace std;

class TomatoApp {
private:
    ResturantManager* rest_manag;
    OrderManager* order_manag;
    TomatoApp() {
        rest_manag = ResturantManager::getInstance();
        order_manag = OrderManager::getInstance();
    }

public:
    TomatoApp(const TomatoApp&) = delete;
    TomatoApp& operator=(const TomatoApp&) = delete;

    static TomatoApp* getInstance() {
        static TomatoApp instance;
        return &instance;
    }

    void seedResturants() {
        Resturant* r1 = new Resturant("Arslaan", "Delhi");
        MenuItem* m1_r1 = new MenuItem();
        m1_r1->setName("Pizza");
        m1_r1->setPrice(100.20);
        r1->addItem(m1_r1);

        Resturant* r2 = new Resturant("Faizan", "Mumbai");
        MenuItem* m1_r2 = new MenuItem();
        m1_r2->setName("Pizza");
        m1_r2->setPrice(100.20);
        r2->addItem(m1_r2);

        Resturant* r3 = new Resturant("Asim", "Chennai");
        MenuItem* m1_r3 = new MenuItem();
        m1_r3->setName("Pizza");
        m1_r3->setPrice(100.20);
        r3->addItem(m1_r3);

        Resturant* r4 = new Resturant("Anmol", "Kolkata");
        MenuItem* m1_r4 = new MenuItem();
        m1_r4->setName("Pizza");
        m1_r4->setPrice(100.20);
        r4->addItem(m1_r4);

        rest_manag->addResturant(r1);
        rest_manag->addResturant(r2);
        rest_manag->addResturant(r3);
        rest_manag->addResturant(r4);
    }

    vector<Resturant*> searchByLocation(string location) {
        return rest_manag->searchByLocation(location);
    }

    void selectRestaurant(User* user, Resturant* rest) {
        user->getCart()->setRestaurant(rest);
    }

    void selectResturant(User* user, Resturant* rest) {
        selectRestaurant(user, rest);
    }

    void addToCart(User* user, int id) {
        Resturant* resturant = user->getCart()->getRestaurant();
        if (resturant == nullptr) {
            cout << "Please select a resturant first " << endl;
            return;
        }
        MenuItem* item_to_add = nullptr;
        for (auto item : resturant->getMenu()) {
            if (item->getId() == id) {
                item_to_add = item;
                break;
            }
        }
        if (item_to_add == nullptr) {
            cout << "Item not found in restaurant menu!" << endl;
            return;
        }
        Cart* ct = user->getCart();
        ct->addItem(item_to_add);
        cout << "item added to the cart \n" << endl;
    }

    void viewCart(User* user) {
        for (auto item : user->getCart()->getItems()) {
            cout << item->getname() << " " << item->getPrice() << "\n";
        }
    }

    Order* checkoutNow(User* user, PaymentStratergy* paymentStratergy, string order_type) {
        Cart* crt = user->getCart();
        Resturant* resturant = crt->getRestaurant();
        double total = crt->getTotalCost();
        OrderFactory* fct = new OrderForNow();
        return checkout(user, resturant, paymentStratergy, total, order_type, fct);
    }

    Order* checkoutSchedule(User* user, PaymentStratergy* paymentStratergy, string order_type) {
        Cart* crt = user->getCart();
        Resturant* resturant = crt->getRestaurant();
        double total = crt->getTotalCost();
        OrderFactory* fct = new OrderSchedule();
        return checkout(user, resturant, paymentStratergy, total, order_type, fct);
    }

    Order* checkout(User* user, Resturant* resturant, PaymentStratergy* paymentStratergy, double total, string order_type, OrderFactory* dedicated_factory) {
        Cart* crt = user->getCart();
        if (crt->isEmpty()) {
            cout << "cart is empty" << endl;
            delete dedicated_factory;
            return nullptr;
        }
        Order* order = dedicated_factory->createOrder(user, resturant, paymentStratergy, total, order_type);
        order_manag->addOrder(order);
        delete dedicated_factory;
        return order;
    }

    void payForCart(Order* order, NotificationFactory* factory, string mobile, string email, string type) {
        if (!order || order->getCost() == 0.0) {
            cout << " cart is empty\n";
            return;
        }
        bool status = order->processPayment();
        if (status) {
            cout << " payment done !" << endl;
            string Message = " your order has been placed " + to_string(order->getOrderId());
            Notification* notify = factory->createNotification(mobile, email, Message, type);
            if (notify) {
                notify->sendMessage(Message);
                delete notify;
            }
            order->getUser()->getCart()->clear();
        } else {
            cout << "Payment failed\n";
        }
    }

    void printUserCart(User* user) {
        Cart* crt = user->getCart();
        for (auto item : crt->getItems()) {
            cout << item->getname() << " " << item->getPrice() << endl;
        }
        cout << "total amount of cart is " << crt->getTotalCost() << endl;
    }
};

using Zomato = TomatoApp;

#endif // ZOMATO_H