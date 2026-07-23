#ifndef SMS_FACTORY_H
#define SMS_FACTORY_H

#include <string>
#include "Factory/NotificationFactory.h"
#include "NotificationService/SMS.h"

using namespace std;

class SMSFactory : public NotificationFactory {
public:
    Notification* createNotification(string mobile, string email, string message, string type) override {
        Notification* res = nullptr;
        if (type == "SMS") {
            res = new SMSNotificationStratergy(mobile);
        }
        return res;
    }
};

#endif // SMS_FACTORY_H