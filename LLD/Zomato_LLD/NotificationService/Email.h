#ifndef EMAIL_NOTIFICATION_H
#define EMAIL_NOTIFICATION_H

#include <iostream>
#include <string>
#include "NotificationAbstract.h"

using namespace std;

class EmailNotificationStratergy : public Notification {
private:
    string email;
public:
    EmailNotificationStratergy(string email) {
        this->email = email;
    }

    void sendMessage(string message) override {
        cout << "Message sent to " << this->email << endl << message << " \n ";
    }
};

#endif // EMAIL_NOTIFICATION_H