#include <bits/stdc++.h>
using namespace std;
class Notification {
    public :
    virtual void send_notification()  = 0;
    virtual ~Notification() = default;
};
class Email : public Notification {
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
class Factory {
    public:
    virtual Notification* provide_message_provider(string &type) = 0;
    virtual ~Factory() = default;
};
class Gmail : public Factory {
    public:
    Notification* provide_message_provider(string &type) override{
        if (type == "mail" ) return new Email();
        else return nullptr;
    }
};
class Contacts : public Factory {

    public:
     Notification* provide_message_provider(string &type) override{
        if (type == "SMS" ) return new SMS();
        else return nullptr;
    }
};
int main()
{
    //main is the client
    string data_type = "mail";
Factory* ft = new Gmail();
Notification* nt = ft->provide_message_provider(data_type);
   if(nt) nt->send_notification();
   else cout <<"provide correct provider\n";
   delete nt;
   delete ft;

}