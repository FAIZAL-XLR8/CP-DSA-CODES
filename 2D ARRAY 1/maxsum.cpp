#include <iostream>
using namespace std;
int main(){
    int arr[2][3]={1,-782,30,4,-1,6};
    int temp=0,sum1=0,ith=0;
   
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;++j){
        temp += arr [i][j];
        }
        if(temp>sum1){
        sum1=temp;
        ith=i;}
        temp=0;
    }

    cout<<ith;

}
