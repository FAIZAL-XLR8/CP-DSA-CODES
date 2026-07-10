#include<bits/stdc++.h>
using namespace std;
// int pow(int base, int power){
//     if(power==0) return 1;  
//     if(power==1) return base;
//     int ans=pow(base,power/2);
//     return ans*ans;
// }
int pow2(int base, int power){
    if(power==0) return 1;  
    if(power==1) return base;
    int ans=pow2(base,power/2);;
    if(power%2!=0)
   return ans*ans*base;
   else
    return ans*ans;
}

int main(){
    int n ;
    cin>>n;
    //  int k=n&(n-1);//checks directly if power is a power of two
    // if(k==0)
    // cout<<pow(2,n);
    // else
    cout<<pow2(2,n);

    
   
 
   
}

// void print(int* ptr,int i){
//     if(i<0) return;
    
//     cout<<ptr[i];
//     print(ptr,(i-1));
// }

// int main(){
//     int arr[]={1,2,3,4,5,6};
//     print(arr,5);
    
// }