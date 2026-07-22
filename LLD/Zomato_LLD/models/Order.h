#ifndef ORDER_H
#define ORDER_H
#include <bits/stdc++.h>
using namespace std;
class Order{
    private :
    User* user;
    int id;
    Resturant* rest;
    vector<MenuItem*>items;
    PaymentStratergy* p;
    double total;
    static int curr_id;
    
    public :
    Order (User* user, int id, vector<MenuItem*>items, Resturant* rest, PaymentStratergy* p)
    {
        this -> user = user;
        this ->id = ++curr_id;
        this -> items = items;
        this-> rest = rest;
        this-> p = p;
        this->total = 0.0;
    }
~Order()
{
    delete user;
    delete rest;
    delete p;
    items.clear();
    cout << "Order destructor called\n";
}    
double getCost()
{
    double tot = 0.0;
    for (auto &item : items)
    {
        tot += item->getPrice()
    }
    return tot;
}
bool processPayment()
{
if (p) {
    p->pay(getCost());
    return true;
} 
return false;
}
int getOrderId() return id;
User* getUser() return user;
Resturant* getRest() return rest;
vector<MenutItem*> getItems() return items;
PaymentStratergy* getPaymentStratergy() return p;
void setPaymentStratergy(PaymentStratergy* p)
{
    this -> p = p;
}
void setUser(User* user) 
{
    this -> user = user;
}
void setItems(vector<MenutItem*>items)
{
    this->items = items;
}
void setResturant(Resturant* rest)
{
    this->rest = rest;
}
virtual string getType() = 0;
void setTotal(double * total) {
    this -> total = total;
}
};
int Order :: curr_id = 0;
#endif