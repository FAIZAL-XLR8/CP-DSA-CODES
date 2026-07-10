#include<iostream>
using namespace std;
bool check(int n){
    if(n==1) return true;//1 is powe of 2 raised to 0
    if(n%2!=0 || n==0) return false;
    return check(n/2);
    
   
}
int main(){
    int n;
    cin>>n;
    cout << check(n);

}