#include<iostream>
using namespace std;
int main(){
    //type casting doesnt works here
    //int x=(string)x;--->error
    int x=19900;
    string s=to_string(x);
    cout<<s<<endl;



    ///use of this func
    //can be used to find no. of digits
    int x1=19990;
    string s1=to_string(x1);
    cout<<s1.length();//output =5

}