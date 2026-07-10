#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;
    v.push_back(2);
    v.push_back(9);
     v.push_back(22);
    v.push_back(0);
    v.push_back(80);
    cout<<v.capacity()<<endl;
    cout<<"size = "<<v.size()<<endl;
    v.at(0)=23;
    for(int i=0;i<v.size();++i)
    cout<<v.at(i)<<endl;
    v[1]=23;
    v.at(2)=8789;
    sort(v.begin(),v.end());

    for(int i=0;i<v.size();++i)
    cout<<v[i]<<endl;


}