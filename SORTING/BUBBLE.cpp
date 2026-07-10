#include<iostream>
using namespace std;
int main(){
    int arr[]={5,6,7,8,9,11,-11,788,-111,9999,1000,3737};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n-1;++i){
        for(int j=0;j<n-1-i;++j){
            if(arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]);
        }

    }
    for(int i=0;i<n;++i)
    cout<<arr[i]<<" ";
}