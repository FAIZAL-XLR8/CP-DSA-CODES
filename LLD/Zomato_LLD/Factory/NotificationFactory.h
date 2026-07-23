#ifndef NOTIFICATION_FACTORY_H
#define NOTIFICATION_FACTORY_H
#include <bits/stdc++.h>
using namespace std;
class NotificationFactory{
    public :
    //factories work is to produce products
    virtual Notification* createNotification(string mobile, string email, string message, string type) = 0;
    virtual ~NotificationFactory() {};
};
#endif