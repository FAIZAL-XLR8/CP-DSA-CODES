#include <iostream>
#include <string>
using namespace std;
int main(){
    string str;
    getline ( cin , str );
    int size = str.size();
    int ctr = 1;
    for ( int i =0 ;i< size ; i++){
    if( str[i]==32 && str[i+1] != 32)
    ctr++;
    }
    cout<<ctr;


}