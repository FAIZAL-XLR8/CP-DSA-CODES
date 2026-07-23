#include <iostream>
#include <vector>
#include <string>
#include "OrcherstratorClass/Zomato.h"
#include "stratergies/Upi_stratergy.h"
#include "Factory/GmailFactory.h"

using namespace std;

int main() {
    // Create TomatoApp Object
    TomatoApp* tomato = TomatoApp::getInstance();
    tomato->seedResturants();

    // Simulate a user coming in (Happy Flow)
    User* user = new User(101, "Faizal", "Delhi");
    cout << "User: " << user->getName() << " is active." << endl;

    // User searches for restaurants by location
    vector<Resturant*> restaurant_list = tomato->searchByLocation("Delhi");

    if (restaurant_list.empty()) {
        cout << "No restaurants found!" << endl;
        return 0;
    }
    cout << "Found Restaurants:" << endl;
    for (auto restaurant : restaurant_list) {
        cout << " - " << restaurant->getName() << endl;
    }

    // User selects a restaurant
    tomato->selectRestaurant(user, restaurant_list[0]);

    cout << "Selected restaurant: " << restaurant_list[0]->getName() << endl;

    // User adds items to the cart
    tomato->addToCart(user, 1);

    tomato->printUserCart(user);

    // User checkout the cart
    Order* order = tomato->checkoutNow(user, new UpiPaymentStrategy(), "Delivery");
    NotificationFactory* factory = new GoogleNotificationFactory();
    string mobile = "9060399510";
    string email = "slif858@gmail.com";
    string type = "Email";

    // User pay for the cart. If payment is success, notification is sent.
    tomato->payForCart(order, factory, mobile, email, type);

    // Cleanup Code.
    delete factory;
    delete order;
    delete user;
    return 0;
}