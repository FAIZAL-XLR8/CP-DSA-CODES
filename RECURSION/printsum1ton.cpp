#include<iostream>
using namespace std;
void sum(int s , int n){
    if(n==0){
        cout<<s<<endl;
        return;
    }
    sum(s+n,n-1);
    }
//single parameter
// int s=0;
// int sum(int n){
//     if(n==0) return s ;
    
//      s =n + sum(n-1);
    

// }



int main(){
    int n;
    cout<<"enter the number"<< endl;
    cin>>n;
   // cout<< sum(n);  single parameter
   sum(0,n);
   
}