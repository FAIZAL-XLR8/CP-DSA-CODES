#include<iostream>
using namespace std;
int main()
{
    int x=5;
int *ptr=&x;
int **ptr1=&ptr;
cout<<*ptr<<endl<<**ptr1;

}