#include<iostream>
using namespace std;
int main()
{
      
    int arr[3]={1,2,3};
      int *ptr=arr;
    for(int i=0;i<3;++i)
    {
        cout<<*ptr;//*ptr is same as displaying the value of 0th element of array
        ptr++;//ptr=ptr+1 means addreass shift by 4 since int type pointer hai
    }
    cout<<*ptr;//prints some garbage value since +4 karne baad koi address nahi array element ka
}