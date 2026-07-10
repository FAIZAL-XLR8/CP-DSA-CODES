 #include<iostream>
 #include<string>
 #include<vector>
 #include<algorithm>
 using namespace std;
 int main(){
    vector<string> str={"flow","flower","faizal","flight"};
    for(int i =0;i<str.size();++i)
    cout<<str[i]<<endl;
    cout<<endl;
    sort(str.begin(),str.end());
for(int i =0;i<str.size();++i)
    cout<<str[i]<<endl;
 }
 //lexographically sortinh=g hota meaning ascii value of each character
 //of string dekhte hai