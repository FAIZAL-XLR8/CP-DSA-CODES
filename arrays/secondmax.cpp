#include<iostream>
#include <climits>
using namespace std;
int main()
{
    // int max=INT_MIN;
    // int smax=INT_MIN;
    // int size;
    // cin>>size;
    // int arr[size];
    // for(int i=0;i<size;++i)
    // cin>>arr[i];

    // for(int i=0;i<size;++i)
    // {
    //     if(max<arr[i])
    //     max=arr[i];
    // }
    // for(int i=0;i<size;++i)
    // {
    //     if(arr[i]==max)
    //     continue;
    //     if(smax<arr[i])
    //     smax=arr[i];
    // }
    // cout<<smax;
    //one traversal
    cout<<" enter the size of the array"<<endl;
    int size;
    cin>>size;
    int arr[size];
    cout<<"enter the elements of the array"<<endl;
    for(int i = 0;i < size; i++ )
    cin>>arr[i];
   int largest=arr[0];
   int slargest=-1;
   for(int i=1;i<size;++i){
       if(arr[i]>largest) {
       slargest=largest;
       largest=arr[i];}
       if(arr[i]<largest && arr[i]>slargest)
       slargest=arr[i];
   }
   return slargest;
cout<<largest<<" "<<slargest;
}