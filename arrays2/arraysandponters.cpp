// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
// void update(int arr[],int size)// int arr[] is a pointer
// {
//     arr[3]=88776;
// }
void update(int *ptr,int size)
{
    ptr[3]=7777;
}
void display(int arr[],int size)
{
    for(int i=0;i<size;++i)
    cout<<arr[i]<<endl;
}
int main(){
   int arr[6]={1,2,3,4,5,6};
   int size=sizeof(arr)/sizeof(arr[0]);
   update(arr,size);//function calling via pointers
   display(arr,size);
   
}