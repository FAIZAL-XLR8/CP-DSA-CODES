#include<bits/stdc++.h>
using namespace std;
// we need first  to create the message
//since creating the message would need dynamically to add
//many behaviours we use decorator pattern
class INotification{
    public :
    virtual string sendNotification() = 0;
};
class BaseNotification : public INotification{
    public :
    string sendNotification() override {
        return "here is the base hello message\n";
    }
};
class IDecoratorNotification  : public INotification{
    protected :
    INotification* nt;
    public :
    IDecoratorNotification(INotification* nt) : nt(nt){}
    virtual string sendNotification() = 0;
};
class TimeStampDecorator : public IDecoratorNotification{
    
}