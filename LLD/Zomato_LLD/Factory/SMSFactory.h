#ifndef SMS_FACTORY_H
#define SMS_FACTORY_H
#include <bits/stdc++.h>
using namespace std;
class SMSFactory : public NotificationFactory{
    
    public :
    Notification* createNotification(string mobile, string email, string message, string type) override {
        Notification* res = nullptr;
        if (type == "SMS")
        {
            res = new SMSNotificationStratergy(mobile);
        }
        else
        return nullptr;
        return res;
    }
};
#endif