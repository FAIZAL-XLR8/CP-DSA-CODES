#include<iostream>
using namespace std;
int main()
{
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;++i)
    cin>>arr[i];
    int max=arr[0];

    for(int i=1;i<size-1;i++)
    {
        if(max<arr[i])
        max=arr[i];

    }
    cout<<max;
}