#include <bits/stdc++.h>
using namespace std;
// object bnanaa hi derived class ka aur class Base class ka
class DepositOnly  {
    public:
    virtual void deposit(double amt) = 0;
}; 
class withdrawOnly : public DepositOnly{
    public :
    virtual void withdraw(double amt) = 0;
};


class SavingsAccount : public withdrawOnly{
    double amount;
    public :
    SavingsAccount() : withdrawOnly()
    {
        amount = 0.0;
    }
    void deposit(double amount) override
    {
        this -> amount += amount;
         cout << "Deposited: " << amount << " in Current Account. New Balance: " << this->amount << endl;
    }
    void withdraw(double amount) override
    {
           if (this->amount >= amount) {
                this -> amount -= amount;
                cout << "Withdrawn: " << amount << " from Current Account. New Balance: " << this -> amount << endl;
            } else {
                cout << "Insufficient funds in Current Account!\n";
            }
    }


};
class FixedTermAccount : public DepositOnly{
    double amount;
    public:
    FixedTermAccount() : DepositOnly()
    {
        amount = 0.0;
    }
    void deposit(double amount) override
    {
        this -> amount += amount;
         cout << "Deposited: " << amount << " in Fixed Term Account. New Balance: " << this -> amount << endl;
    }
};
class Client{
    vector<DepositOnly*> depo;
    vector<withdrawOnly*> wit;
    public :
    Client (vector<withdrawOnly*> wit, vector<DepositOnly*> depo){
        this -> depo = depo;
        this -> wit = wit;
    }
    void processPayment()
    {
        for (withdrawOnly* wt : wit)
        {
            wt ->deposit(10.0);
            
            wt -> withdraw(5.0);
        }
        for (DepositOnly* dp : depo)
        {
            dp -> deposit(10.0);
        }
    }
   
};
int main()
{
    vector<withdrawOnly*> wt;
    wt.push_back(new SavingsAccount());
    vector<DepositOnly*> dp;
    dp.push_back(new FixedTermAccount());
    Client* cl = new Client(wt,dp);
    cl -> processPayment();

}