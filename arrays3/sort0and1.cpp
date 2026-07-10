#include<bits/stdc++.h>
using namespace std;
int main()
{
     vector<int>v;
    v.push_back(0);
    v.push_back(1);
     v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    int c1=0,c2=0;
    for(int i=0;i<v.size();++i)
    {
        if(v[i]==0)
        ++c1;
        else ++c2;
    }
    for(int i=0;i<v.size();++i)
    {
        if(i<c1)
        v[i]=0;
        else
        v[i]=1;
    }
    
    for(int i=0;i<v.size();++i)
    {
        cout<<v[i];
    }



}