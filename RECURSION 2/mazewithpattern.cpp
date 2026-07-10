#include<iostream>
using namespace std;
//printing pattern
void pattern(int startrow,int endrow, int startcol,int endcol,string str){
    //base case
    if(startcol>endcol ||startrow>endrow) return;
    if(startrow==endrow && startcol==endcol) {
        cout<<str<<endl;
        return;
    }
    pattern(startrow+1,endrow,startcol,endcol,str+"D");
    pattern(startrow,endrow,startcol+1,endcol,str+"R");
}
int main(){
    pattern(1,2,1,2,"");
}