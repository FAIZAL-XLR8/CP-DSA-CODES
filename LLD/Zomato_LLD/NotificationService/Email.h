#ifndef EMAIL_NOTIFICATION_H
#define EMAIL_NOTIFICATION_H
#include <bits/stdc++.h>
using namespace std;
class EmailNotificationStratergy  : public Notification{
    string email;
   public :
   
   EmailNotificationStratergy(string &email)
   {
    this -> email = email;
   }
    void sendMessage (string message) 
    {
        cout << "Message sent to " << this -> email << endl << message<< " \n " ; 
    }
    
};
#endif