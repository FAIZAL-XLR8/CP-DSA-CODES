#ifndef SMS_NOTIFICATION_H
#define SMS_NOTIFICATION_H
#include <bits/stdc++.h>
using namespace std;
class SMSNotificationStratergy  :  public Notification{
    string mobile;
   public :
   SMSNotificationStratergy(string number) 
   {
    this -> mobile = number;
   }
    void sendMessage (string message) {
        cout <<"Message sent to the number : " << mobile << endl << message;
    }
    ~SMSNotificationStratergy() = default;
};
#endif