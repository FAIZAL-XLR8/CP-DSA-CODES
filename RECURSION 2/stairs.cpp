#include<iostream>
using namespace std;
//2stairs chahdne ka number of tarikas
// int stairs(int n){
//     //base case(if 1 step lena hai toh upar chahdne ka)
//     //1 tarika ek step lo aur 2 step chahdne ka 2 tarika ya 11 ya 2 ek baar me
//     if(n==1) return 1;
//     if(n==2) return 2;
//     //recursive call
//     return stairs(n-1)+ stairs(n-2);
//}
//3 steps tak
int stairs(int n ){
    if(n==1) return 1;
    if(n==2) return 2;
    if(n==3) return 4;
    //recursive call
    return stairs(n-1)+ stairs(n-2)+ stairs(n-3);
}
int main(){
    cout<<stairs(4);

}