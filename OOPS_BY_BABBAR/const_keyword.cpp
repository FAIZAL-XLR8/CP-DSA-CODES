#include<iostream>
using namespace std;
int main ()
{
    int const* a= new int(10); //--> * after const => data = const, ptr can be re referenced , 
    //another way to write const int*a=new int(10) --> data = const
    cout << *a << endl; // -->o/p =  10
    int b = 20;
    a = &b; // --> allowed since const ke baad *
    cout << *a << endl; // --> op = 20
    int *const c = new int (100);
    cout << *c << endl; //-->o/p = 100
    int d = 200;
    // c = &d; --> error pointer is const
    *c = 400;
    cout << *c << endl; // o/p ==> 400

    //====making both pointer and data = const
    const int *const e = new int (900);
    cout << *e << endl;
    int f = 1;
    // e = &f; --> error
    // *e = 10000; --> error

}