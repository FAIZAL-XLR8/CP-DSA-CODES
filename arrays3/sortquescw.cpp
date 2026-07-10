#include<bits/stdc++.h>
using namespace std;
void display(vector<int>&v)
{
    for(int i=0;i<v.size();++i)
    cout<<v[i]<<" ";
}

void swap(int i,int j,vector<int>&v)
{
    int temp=v[i];
    v[i]=v[j];
    v[j]=temp;


}
int main()
{
     vector<int>v;
    v.push_back(-90);
    v.push_back(100);
     v.push_back(-31);
    v.push_back(-30);
    v.push_back(30);
        v.push_back(40);
    v.push_back(10);
     v.push_back(-9);
    v.push_back(-4);
    v.push_back(20);
    int i=0,j=v.size()-1-i;

    while(i<j)
    {
        if(v[i]>0&& v[j]<0)
        {
            swap(i,j,v);
            i++,j--;
        }
        else if(v[i]<0)
        i++;
        else if(v[j]>0)
        j--;
    }
    display(v);

}