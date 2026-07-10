#include<bits/stdc++.h>
using namespace std;
void swap(int *ptr, int *ptr2)
{
    int temp=*ptr2;
    *ptr2=*ptr;
    *ptr=temp;
    return;


}
int main()
{
    vector<int>v={1,2,3,4,5};

    for(int i=0;i<=v.size()-1-i;i++)
        swap(&v[i],&v[v.size()-1-i]);

        for(int i=0;i<v.size();++i)
        cout<<v[i]<<" ";
    
}
