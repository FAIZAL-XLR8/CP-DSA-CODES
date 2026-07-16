#include <bits/stdc++.h>
using namespace std;
class Notification{
    public :
    virtual void send_notification() = 0;
};
class Email : Notification {
    public :
    void send_notification() override {
        cout << "sendigni notifications via email\n";
    }
};
class SMS : public Notification{
    public:
    void send_notification()override {
        cout << "sending notifications via SMS\n";
    }
};
