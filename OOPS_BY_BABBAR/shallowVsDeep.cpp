#include <iostream>
using namespace std;
class abc {
    public :
    int* ptr; //always remember whenver a dynamic meory allocation data member is there is class blueprint then destructr is needed
    abc(int val) : ptr(new int(val)){};
    void display(){
        cout << *ptr << endl << ptr << endl;
    }
    ~abc()
    {
        delete ptr; //although destructors always exist but delete ptr must be explicityly written when involving pointers
    }
};
int main()
{
    abc* a = new abc(10);
    abc b = *a; //this is shallow copy yaani 
    a->display();
    delete a;
    b.display(); // this gives garbage values since a is no more


}