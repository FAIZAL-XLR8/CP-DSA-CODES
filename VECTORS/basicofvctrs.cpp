
#include <iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;
    v.push_back(10);
    cout<<v.size()<<"   " <<v.capacity()<<endl;


    v.push_back(22);
    cout<<v.size()<<" "<<v.capacity()<<endl;

    v.push_back(222);
    cout<<v.size()<<" "<<v.capacity()<<endl;
    v.push_back(11);
    cout<<v.size()<<" "<<v.capacity();
    v.at(3)=23;
    cout<<v[1];
    cout<<v[3];

}