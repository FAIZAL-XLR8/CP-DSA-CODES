#include <iostream>
using namespace std;
int main(){int sum=0;
    int arr[3][3]={1,2,30,4,-1,6,5,77,-8};
    int r1=0,l1=1,r2=3,l2=3;
    for(int i=r1;i<r2;++i)
    {
        for(int j=l1;j<l2;++j)
        sum+=arr[i][j];
    }
    cout<<sum;


}
