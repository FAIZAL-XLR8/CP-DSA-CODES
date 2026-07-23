#ifndef ZOMATO_H
#define ZOMATO_H
#include <bits/stc++.h>
using namspace std;
class Zomato{   
    private :
    static Zomato instance;
    ResturantManager* rest_manag;
    OrderManager* order_manag;
    public :
    Zomato getInstance() return instance;
    void seedResturants()
    {
        Resturant* r1 = new Resturant ("Arslaan", "Delhi");
        MenuItem* m1_r1 = new MenuItem();
        m1_r1 -> setName("Pizza");
        m1_r1 -> setPrice(100.20);
        r1 -> addItem(m1_r1);
        Resturant* r2 = new Resturant ("Faizan", "Mumbai");
        MenuItem* m1_r2 = new MenuItem();
        m1_r2 -> setName("Pizza");
        m1_r2 -> setPrice(100.20);
        r2 -> addItem(m1_r1);
        Resturant* r3 = new Resturant ("Asim", "Chennai");
        MenuItem* m1_r3 = new MenuItem();
        m1_r3 -> setName("Pizza");
        m1_r3 -> setPrice(100.20);
        r3 -> addItem(m1_r1);
        Resturant* r4 = new Resturant ("Anmol", "Kolkata");
        MenuItem* m1_r4 = new MenuItem();
        m1_r4 -> setName("Pizza");
        m1_r4 -> setPrice(100.20);
        r4 -> addItem(m1_r1);
        rest_manag = ResturantManager:: getInstance();
        rest_mang->addResturant(r1);
        rest_mang->addResturant(r2);
        rest_mang->addResturant(r3);
        rest_mang->addResturant(r4);
        
    }
    vector<Resturant*> searchByLocation(string location)
    {
       return rest_manag->searchByLocation(location);
    }
    void selectResturant(User* user, Resturant* rest)
    {
        user -> cart -> setRestaurant(rest);
    }
    void addToCart(User* user, int id)
    {
        Resturant* resturant = user -> cart -> getRestaurant();
        if (resturant == nullptr)
        {cout << "Please select a resturant first "; return;}
        MenuItem* item_to_add = nullptr;
        for (auto item : resturant -> getMenu())
        {
            if (item -> getId() == id)
            {
                item_to_add = item;
                break;
            }
        }
        Cart* ct = user->getCart();
        ct->addItem(item_to_add);
        cout <<"item added to the cart \n"<<endl;
    }
    void viewCart(User* user)
    {
        for (auto item : user -> cart)
        {
            cout << item->getname() <<" "<< item->getPrice() <<"\n";
        }
        return;
        
    }
    Order* checkoutForNow(User* user, PaymentStratergy* paymentStratergy, string order_type)
    {
        Cart* crt = user -> getCart();
        Restaurant* resturant = crt -> getResturant();
        double total = crt -> getTotalCost();
        //User* user, Resturant* resturant, PaymentStratergy* paymentstratergy, double total, string type
        OrderFactory* fct = new OrderForNow();
        return checkout(user, resturant, paymentStratergy, total, order_type, fct);
    }
    Order* checkoutSchedule(User* user, PaymentStratergy* paymentStratergy, string order_type)
    {
         Cart* crt = user -> getCart();
        Restaurant* resturant = crt -> getResturant();
        double total = crt -> getTotalCost();
        //User* user, Resturant* resturant, PaymentStratergy* paymentstratergy, double total, string type
        OrderFactory* fct = new OrderSchedule();
        return checkout(user, resturant, paymentStratergy, total, order_type, fct);
       
    }
    
    Order* checkout(User* user, PaymentStratergy* paymentStratergy, string order_type, OrderFactory* dedicated_factory)
    {
        Cart* crt = user -> getCart();
        if (crt -> isEmpty()){
            cout << "cart is empty"; return nullptr;
        }
        Restaurant* resturant = crt->getRestaurant();
        double total = crt -> getTotalCost();
        Order* order = dedicated_factory -> createOrder(user,  resturant,  paymentstratergy, total,  type);
        order_manag = OrderManager::getInstance();
        order_manag -> addOrder(order);
        return order;
        
    }
    void payForCart(Order* order, NotificationFactory* factory, string mobile, string email, string type)
    {
       
        if (order ->getCost() == 0.0)
        {
            cout << " cart is empty\n";
            return;
        }
        bool status = order -> processPayment();
        if (status)
        {
            cout << " payment done !" << endl;
            string Message =" your order has been placed " << order->getOrderId();
            Notification* notify = factory->createNotification(mobile, email, Message, type);
            notify -> sendMessage(Message);
            user -> getCart() -> clear();
        }
        else
        {
            cout <<"Payment failed\n";
        }
    }
    void printUserCart(User* user)
    {
        Cart* crt =  user -> getCart()
        
        for (auto item : crt->getItems())
        {
            cout << item -> getname() << " " << item -> getPrice();
        }
        cout << endl;
        cout << "total amount of cart is " << crt -> getTotalCost();
    }

};
Zomato Zomato :: instance = new Zomato(); //eager 
#endif