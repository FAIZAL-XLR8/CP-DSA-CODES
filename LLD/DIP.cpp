//high level module - -> interface<----low level module
#include<bits/stdc++.h>
using namespace std;
class Interface{
    public :
    virtual void save(string user) = 0; 
};
class SaveToSQL : public Interface{
    public :
    void save(string user) override {
        cout << "Save to DB SQL \n" << user << endl;
    }
};
class SaveToMongoDB : public Interface 
{
    public :
    void save (string user) override {
        cout << "Saved to MongoDB SQL\n" << user << endl;
    }
};
class Account{
    private :
    Interface* it;
    public :

    Account(Interface* it) : it(it){}
    void saveKaro(string user)
    {
        it -> save(user);
    }
};
int main()
{
    SaveToMongoDB* mg = new SaveToMongoDB();
    SaveToSQL* sql = new SaveToSQL();
   // Account* acc = new Account(sql);
    Account* acc = new Account(mg);
    acc -> saveKaro("Muhammad Faizal Ali");
}