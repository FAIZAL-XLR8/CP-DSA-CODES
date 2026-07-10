#include<bits/stdc++.h>
using namespace std;
void reversePart(int i,int j,vector<int>&v)
{
    while(i<=j)
    {
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        ++i;
        --j;
    }
}
void display(int size, vector<int>&v)
{
    for(int i=0;i<size;++i)
    cout<<v[i];
}
int main()
{
    cout<<"enter the size "<<endl;
    int size;
    cin>>size;
    vector<int>v(size);
    cout<<"enter the elements"<<endl;
    for(int i=0;i<v.size();++i)
    {
        cin>>v[i];
    }
    int i,j;
    cout<<"enter the indices"<<endl;
    cin>>i>>j;
    reversePart(i,j,v);
    display(size,v);

}