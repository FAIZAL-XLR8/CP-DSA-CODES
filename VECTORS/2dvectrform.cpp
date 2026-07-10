#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>>v;
    vector<int>v1;
    vector<int>v2;
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(876765);
    v2.push_back(7767575);
    v.push_back(v1);
    
    v.push_back(v2);
    for(int i=0;i<v.size();++i){
        for(int j=0;j<v[i].size();++j){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}
