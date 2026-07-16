#include <bits/stdc++.h>
#include <mutex>
using namespace std;    
class Singleton {
    private :
    static Singleton* instance;
    static mutex mtx;
    Singleton()
    {
        cout <<"this is constructor\n";
    }
    public :
    static Singleton* getInstance(){
        if(instance == nullptr)
        {
            lock_guard <mutex> lock(mtx);
            if (instance == nullptr)
            {
                instance = new Singleton();
            }
        }
        return instance;
    }
};
mutex Singleton:: mtx;
Singleton* Singleton :: instance = nullptr;
int main()
{
    Singleton* obj1 = Singleton :: getInstance();
    Singleton* obj2 = Singleton :: getInstance();
    cout << (obj1 == obj2);
}