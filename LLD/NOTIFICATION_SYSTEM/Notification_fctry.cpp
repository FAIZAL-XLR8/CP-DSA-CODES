#include<bits/stdc++.h>
using namespace std;
// we need first to create the message
// since creating the message would need dynamically to add
// many behaviours we use decorator pattern
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
    TimeStampDecorator(INotification* nt) : IDecoratorNotification(nt){}
    string createNotification() override {
        return  nt -> createNotification() + "26th July 2026 ";
    }
};
class SignatureDecorator : public IDecoratorNotification{
    public:
    SignatureDecorator(INotification* nt) : IDecoratorNotification(nt){}
    string createNotification() override {
        return nt -> createNotification() + "Signed Digitally" ;
    }
};

class IObserver {
   public :
   virtual void update() = 0;
};

// NOW the notifications need to be sent to parties who need it so observer pattern
class IObservable {
    public :
    virtual void addObserver(IObserver* obs) = 0;
    virtual void removeObserver(IObserver* obs) = 0;
    virtual void notify() = 0;
    virtual void setNotification(INotification* nt) = 0;
    virtual string getNotificationContent() = 0;
};

class LoggerObserver : public IObserver {
    private :
    IObservable* obs;
    public :
    LoggerObserver(IObservable* obs) : obs (obs) {}
    void update() override{
        cout << " here is the logger content " << obs ->getNotificationContent() << endl; 
    }
};

class NotificationObservable : public IObservable {
    private :
    INotification* nt; // we need to delegate the notification to repective
    // observers so we need to keep track of the right notifcation
    vector<IObserver*>list;
public :
    void setNotification(INotification* nt) override {
        this ->nt = nt;
    }
    INotification* getNotification(){
        return nt;
    }
    string getNotificationContent() override {
        return nt -> createNotification();
    }
    void addObserver(IObserver *obs) override {
        list.push_back(obs);
        cout << "Observer added\n";
    }
    void removeObserver(IObserver *obs) override {
        auto it = find (list.begin(), list.end(), obs);
        if (it != list.end()) {
            list.erase(it);
            cout << "Observer removed\n";
        }
    }
    void notify() override {
        for (auto item : list)
        {
            item -> update();
        }
    }
};

class INotificationStratergy {
    public:
    virtual void sendMessage(string content) = 0;
};

class EmailStratergy : public INotificationStratergy {
    public :
    void sendMessage(string content) override {
        cout << "here is the email " << content << endl;
    }
};

class SMSStratergy : public INotificationStratergy {
    public : 
    void sendMessage(string content) override{
        cout <<"here is the sms " << content << endl;
    }
};

class NotificationEngine : public IObserver {
    vector<INotificationStratergy*> list; //this is the mainstram engine which will 
    //distribute to the right people who need it 
    IObservable* obs; //each observer needs to track which ibservable are they looking for
public :
    NotificationEngine(IObservable* obs) : obs(obs){}
    void addStratergy (INotificationStratergy* stratergy) {
        list.push_back(stratergy);
    }
    void update() override {
        for (auto item : list)
        {
            item ->sendMessage(obs ->getNotificationContent());
        }
    }
};
class NotificationManager {
    private :
    vector<INotification*> list;
    IObservable* obs;
    static NotificationManager* instance;
    public :
    NotificationManager(){
        obs = new NotificationObservable();
    }
    static NotificationManager* getInstance(){
        return instance;
    }
    IObservable* getObservable() {
        return obs;
    }
    void addObserver(IObserver* observer) {
        obs->addObserver(observer);
    }
    void setNotification(INotification* nt){
        list.push_back(nt);
        obs->setNotification(nt);
        obs->notify();
    }
    vector<INotification*> getHistory()
    {
        return list;
    }
};
NotificationManager* NotificationManager:: instance = new NotificationManager();
int main()
{
    //first the message is created with needed additonal
    INotification* i = new BaseNotification();
    i  = new TimeStampDecorator(i);
    i = new SignatureDecorator(i);
    NotificationManager* manager = NotificationManager::getInstance();
    
    // Register the observer so that notify() has an observer to update and print output
    manager->addObserver(new LoggerObserver(manager->getObservable()));
    
    manager->setNotification(i);
}