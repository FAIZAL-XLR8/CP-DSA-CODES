#include<iostream>
#include<string>
using namespace std;
int main(){
     string str="2476746";
     int x= stoi(str);//stoi----> string to integer
     cout<<x+1<<endl;
     string str1 = to_string(x);
     cout<< str1;
     //string to long long
     string str2="2634534644374537537";

      long long t= stoll(str2);// string to long long
      
      cout<< t;
}