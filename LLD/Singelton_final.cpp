#include <bits/stdc++.h>
using namespace std;
class Singleton {
    //the whole purpose of this is
    //  to create a single object which handles all the info
    //to achieve this use two things
    //1 private constructor so we create objects only using setters
    //2 static pointer of Singleton class to initialise it via a 
    //static getter that returns singleton*;
    private :
    static Singleton* instance;
    Singleton(){
        cout << "constructor created" << endl;
    }
    public :
    static Singleton* getInstance()
    {
       
        return instance;
    }
};
Singleton* Singleton :: instance = new Singleton();
int main()
{
    Singleton* obj1 = Singleton :: getInstance();
    Singleton* obj2 = Singleton :: getInstance();
    cout << (obj1 == obj2);
}