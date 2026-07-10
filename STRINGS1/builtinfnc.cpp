#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v={1,2,3,4,5,6};
//     //calculating length of string
//     string str="faizal is a good guy";
//     cout<<str.length()<<endl;//calculates lenght excluding null char
//     cout<<str.size()<<endl;//also calculates lenght ""      ""
//     //pushback func
//     cout<<str<<endl;
//     str.push_back('c');//adds one element
//      cout<<str<<endl;
//     str.pop_back();//ek element udd jata from last
//      cout<<str<<endl;
//      //output
// // 20
// 20
// faizal is a good guy
// faizal is a good guyc
// faizal is a good guy
//concatenation
//we can concatenate only string elements into string
//exmple
// string str="faizal";
// cout<<str<<endl;
// str=str+"ali"+'f';
// cout<<str<<endl;
// str="ali"+str;//ali pehle aajayega

// cout<<str<<endl;
string s;
getline(cin,s);
int n=s.size();
reverse(s.begin()+1,s.begin()+5    );//this reverses till middle element of string,
cout<<s;                                //,,remember that second time uh use s.beigin uh 
                                       //do it till the lement uh want to reverse with index+1
 
}