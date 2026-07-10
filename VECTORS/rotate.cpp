#include<bits/stdc++.h>
using namespace std;
void reverseP(int i,int j, vector<int>&v)
{
    while(i<=j)
    {
        int temp=v[j];

        v[j]=v[i];
        v[i]=temp;
        i++;
        j--;

    }
}
void display(int size,vector<int>&v)
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
    cout<<"enter rotating times"<<endl;
    int k;
    cin>>k;
    if(k>v.size())
    {
        k%=v.size();
        reverse(v.begin(),v.begin()+3);
        reverse (v.begin()+3,v.end());
        reverse (v.begin(),v.end());
    // reverseP(0,v.size()-k-1,v);
    // reverseP(v.size()-k,(v.size()-1),v);
    // reverseP(0,size-1,v);
    display(size,v);
    }
    else if(k==v.size())
    display(size,v);

    else{
        reverseP(0,v.size()-k-1,v);
    reverseP(v.size()-k,(v.size()-1),v);
    reverseP(0,size-1,v);
    display(size,v);

    }



}