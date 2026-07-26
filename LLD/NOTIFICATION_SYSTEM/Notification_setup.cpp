#include<bits/stdc++.h>
using namespace std;
// we need first  to create the message
//since creating the message would need dynamically to add
//many behaviours we use decorator pattern
class INotification{
    public :
    virtual string createNotification() = 0;
};
class BaseNotification : public INotification{
    public :
    string createNotification() override {
        return "here is the base hello message\n";
    }
};
class IDecoratorNotification  : public INotification{
    protected :
    INotification* nt;
    public :
    IDecoratorNotification(INotification* nt) : nt(nt){}
    virtual string createNotification() = 0;
};
class TimeStampDecorator : public IDecoratorNotification{
    public :
    TimeStampDecorator(INotification* nt) : n(nt){}
    string createNotification() override {
        return "26th July 2026" + nt -> createNotification();
    }
}
class SignatureDecorator : public IDecoratorNotification{
    public:
    SignatureDecorator(INotification* nt) : nt(nt){}
    string createNotification() override {
        return "Signed Digitally" + nt -> createNotification();
    }
};

//NOW the notifications need to be sent to parties who need it so observer pattern
class Observer; //forward declaration
class IObservable {
    private :
    INotification* nt; // we need to delegate the notification to repective
    // observers so we need to keep track of the right notifcation
    vector<Observer*>list;
public :
    void setNotification(INotification* nt) {
        this ->nt = nt;
    }
    INotification* getNotification(){
        return nt;
    }
    string getNotificationContent(){
        return nt -> createNotification();
    }
void addObserver(Observer *obs){
    list.push_back(obs);
    cout << "Observer added\n";
}
 void removeObserver(Observer *obs){
    auto it = find (list.begin(), list.end(), obs);
    list.erase(it);
    cout << "Observer removed\n";
}
    virtual void get
};