#include <iostream>
using namespace std;
class abc {
    
    public :
    int val;
    abc(int val) : val(val){};
    void display()const {
        cout <<val<< endl ;
    }
    ~abc()
    {
    }
    private : 
    abc (int val) : val(val){}; //yes they can be private just creating objects is restriccted to few classes only
    friend class d;
};
class d{
    public:
    abc* a;
    d(int val){
        a = new abc(val);
    }
};
int main()
{
  



}