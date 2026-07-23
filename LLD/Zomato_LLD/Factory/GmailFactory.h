#ifndef GOOGLE_FACTORY_H
#define GOOGLE_FACTORY_H

#include <string>
#include "Factory/NotificationFactory.h"
#include "NotificationService/Email.h"
#include "NotificationService/SMS.h"

using namespace std;

class GoogleNotificationFactory : public NotificationFactory {
public:
    Notification* createNotification(string mobile, string email, string message, string type) override {
        Notification* res = nullptr;
        if (type == "Email") {
            res = new EmailNotificationStratergy(email);
        } else if (type == "SMS") {
            res = new SMSNotificationStratergy(mobile);
        }
        return res;
    }
};

#endif // GOOGLE_FACTORY_H