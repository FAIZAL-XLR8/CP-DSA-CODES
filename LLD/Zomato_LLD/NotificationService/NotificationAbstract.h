#ifndef NOTIFICATION_H
#define NOTIFICATION_H
#include <bits/stdc++.h>
using namespace std;
class Notification {
   public :
   virtual void sendMessage (string message) = 0;
    virtual ~Notification() = default;
};
#endif