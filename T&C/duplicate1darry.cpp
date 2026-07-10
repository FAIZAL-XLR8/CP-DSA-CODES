#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v={1,2,3,4,5,6,6,7,8,9};
    int s=0;
    int sum=(9*10)/2;
    for(int i=0;i<10;i++)
    s+=v[i];
    int diff=s-sum;
    cout<<diff;

}