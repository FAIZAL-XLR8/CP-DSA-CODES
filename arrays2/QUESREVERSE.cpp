#include<iostream>
#include <vector>
using namespace std;
int main()
{
    cout<<"enter the size of array "<<endl;
    int size;
    cin>>size;
    vector<int>v;
  
    for(int i=0;i<size;++i)
    {
        int element;
    cin>>element;
    v.push_back(element);
    }
      vector<int>v1(v.size());
    
 for(int i=0;i<v1.size();++i)
 {
    //i+j=size-1
    v1[i]=v[v.size()-1-i];
    cout<<v1[i]<<" ";
 }

}
