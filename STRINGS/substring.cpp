#include<iostream>
#include<string>
using namespace std;
int main(){
    string str="md faizal ali";
    //str.substr(indx,len);---->indx=jaha se krna hai uska len=kitna len ka 
    cout<<str.substr(1);//1th index se lekr end tk print krega
    cout<<str.substr(1,8);//1th index se 8th lenth tk print krega
}