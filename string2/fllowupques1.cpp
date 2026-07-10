#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    int n=str.size();
    vector<int> v(26,0);
    for(int i=0;i<n;++i){
        int ascii=(int)str[i];
        v[ascii-97]++;
    }
    int max=0;
    for(int i=0;i<26;++i)
    {
        if(max<v[i])
        max=v[i];
    }
    for(int i=0;i<26;++i){
        if(v[i]==max)
        {
            char ch=(char)(i+97);
            cout<<max<<" "<<ch<<endl;
        }
    }
}