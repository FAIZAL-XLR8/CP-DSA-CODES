#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int x;
    cin>>x;
    int last;
    vector<int>v={1,2,3,3,5,5,7,89,0,3};
    for(int i=v.size()-1;i>0;--i)
    {
        if(v[i]==x)
        last=i;
        break;
    }
    cout<<last;
}