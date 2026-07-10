#include<iostream>
using namespace std;
int maze(int endrow,int endcol){
    //base case
    if(endrow<1 || endcol < 1) return 0;//bahr ho gya grid se
    if(endrow==1 && endcol==1) return 1;//one of the ways of many ways reached the destination
    //recursive call
    return maze(endrow-1,endcol) + maze(endrow,endcol-1);// if moving left endcol-1 if down endrow-1

}
int main(){
cout<<maze(3,3);
}