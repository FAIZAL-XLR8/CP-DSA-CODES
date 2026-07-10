#include<iostream>
using namespace std;
int main(){
    int arr1[2][3]={1,2,3,4,5,6};
    int arr2[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    int arr[2][4]={0};
    
    if(sizeof(arr1[0]) / sizeof(arr1[0][0]) == sizeof(arr2) / sizeof(arr2[0]))
    {
        for(int i=0;i<2;++i){
            for(int j=0;j<4;++j){
                for(int k=0;k<3;++k){
                  arr[i][j]+=arr1[i][k]*arr2[k][j];
                   
                }
               
            }
        }
    }
      for(int i=0;i<2;++i){
        for(int j=0;j<4;++j){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;

    }


}