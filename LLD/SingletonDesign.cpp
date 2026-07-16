#include<bits/stdc++.h>
using namespace std;
class Singleton{
    private :
    Singleton()
    {
        cout <<"this is constructor\n";
    }
    static Singleton* instance;
    public :
    static Singleton* getInstance()
    {
        if (instance == nullptr)
        {
            instance = new Singleton();
        }
        return instance;
    }
};
Singleton* Singleton :: instance = nullptr; 

int main()
{
    Singleton* obj1 = Singleton :: getInstance();
    Singleton* obj2 = Singleton :: getInstance();
    cout <<(obj1 == obj2);
}