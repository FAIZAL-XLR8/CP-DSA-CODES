#include <iostream>
using namespace std;
int main(){
    int arr[2][3]={1,2,30,4,-1,6};
    int max=arr[0][0];
    int ith,jth;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;++j)
        {
            if(max>arr[i][j]){
            max=arr[i][j];
            ith=i,jth=j;}


        }
    }
    cout<<max<<endl<<ith<<"\t"<<jth;
}