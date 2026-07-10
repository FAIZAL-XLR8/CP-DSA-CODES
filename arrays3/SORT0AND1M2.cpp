#include<bits/stdc++.h>
using namespace std;
void display(vector<int>&v)
{
    for(int i=0;i<v.size();++i)
    cout<<v[i];
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
    v.push_back(1);
    v.push_back(1);
     v.push_back(0);
    v.push_back(1);
    v.push_back(0);
     v.push_back(1);
    v.push_back(1);
     v.push_back(0);
   
    
    int i=0,j=v.size()-1-i;

   while(i<j)
   {
    // ya to ye pehle likho ya break istamal kro commenting out this below if case
     if(v[i]==1 && v[j]==0){ 
    swap(i,j,v); i++;
    j--;}
    if(v[i]==0)
    i++;
    if(v[j]==1)
    j--;
    // if(i>j) break;
    
    // if(v[i]==1 && v[j]==0){
    // swap(i,j,v); i++;
    // j--;}
    

   }
   display(v);
}
