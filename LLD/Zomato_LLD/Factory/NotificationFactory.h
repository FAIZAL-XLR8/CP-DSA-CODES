#ifndef NOTIFICATION_FACTORY_H
#define NOTIFICATION_FACTORY_H

#include <string>
#include "NotificationService/NotificationAbstract.h"

using namespace std;

class NotificationFactory {
public:
    virtual Notification* createNotification(string mobile, string email, string message, string type) = 0;
    virtual ~NotificationFactory() = default;
};

#endif // NOTIFICATION_FACTORY_H