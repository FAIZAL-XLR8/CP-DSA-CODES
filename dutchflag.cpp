#include<iostream>
using namespace std;
void swap(int *ptr1,int* ptr2){
    *ptr1=*ptr1+*ptr2;
    *ptr2=*ptr1-*ptr2;
    *ptr1=*ptr1-*ptr2;
}
int main(){
    int arr[]={2,2,0,0,0,1,1,2,2};
    int low=0,mid=0,high=8;
    while(mid<=high){
        if(arr[mid]==2){
        swap(&arr[high],&arr[mid]);
        high--; }
        if(arr[mid]==0){
             swap(&arr[low],&arr[mid]);
             low++;
            mid++;
        }
  if(arr[mid]==1)
  mid++;

    }
    for(int i=0;i<8;++i)
    cout<<arr[i];
}