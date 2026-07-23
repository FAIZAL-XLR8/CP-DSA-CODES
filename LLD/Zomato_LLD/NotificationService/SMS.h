#ifndef SMS_NOTIFICATION_H
#define SMS_NOTIFICATION_H

#include <iostream>
#include <string>
#include "NotificationAbstract.h"

using namespace std;

class SMSNotificationStratergy : public Notification {
private:
    string mobile;
public:
    SMSNotificationStratergy(string number) {
        this->mobile = number;
    }

    void sendMessage(string message) override {
        cout << "Message sent to the number : " << mobile << endl << message << endl;
    }

    ~SMSNotificationStratergy() override = default;
};

#endif // SMS_NOTIFICATION_H