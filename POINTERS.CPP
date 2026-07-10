#include <iostream>
using namespace std;
int main()
{
    // bool x=false;
    // bool *ptr=&x;
    // cout<<ptr++<<endl;
    // cout<< ptr;
    int x=9;
    int *ptr=&x;
   cout<<ptr<<endl;
    ptr+=1;
    cout<<*ptr;
}