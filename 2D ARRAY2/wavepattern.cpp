#include<iostream>
using namespace std;
int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    // for(int i=0;i<3;++i)
    // {
    //     if(i%2==0)
    //     {
    //         for(int j=2;j>=0;--j){
    //             cout<<arr[i][j]<<" ";
    //         }
    //     }
    //     else
    //     for(int j=0;j<3;++j){
    //         cout<<arr[i][j]<<" ";
    //     }
    // }
        // for(int i=2;i>=0;--i){
        //     if(i%2!=0)
        //     {
        //         for(int j=2;j>=0;--j){
        //             cout<<arr[i][j]<<" ";
        //         }
            
        //     }
        //     else{
        //         for(int j=0;j<3;++j){
        //             cout<<arr[i][j]<<" ";
        //         }
        //     }
        // }
        for(int j=0;j<3;++j){
            if(j%2==0){
                for(int i=0;i<3;++i){
                    cout<<arr[i][j]<<" ";
                }
            }
                else{
                    for(int i=2;i>=0;--i){
                        cout<<arr[i][j]<<" ";
                    
                }
            }
        }
}