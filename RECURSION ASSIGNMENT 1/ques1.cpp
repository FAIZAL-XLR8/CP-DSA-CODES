#include<iostream>
using namespace std;
int sum(int a, int b){
    if(a>b) return 0;
   else if(a%2!=0 && a<=b)
    return a+sum(a+1,b);
    return sum(a+1,b);
    
}
// int sum(int s, int a,int b){
//     if(a%2!=0 && a<b)
//     sum(s+a, a+1,b);
//     else if(a>b-1)
//     return s;
//     else++a;
// }
int main(){
    int a=3 , b=11;
//     int s=a+b;
//     sum(s,a+1,b);
cout<<sum(a,b);
 }