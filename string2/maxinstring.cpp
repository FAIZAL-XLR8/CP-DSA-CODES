#include<iostream>
#include<string>
#include<vector>
#include<math.h>
using namespace std;
int main(){
  
    vector<string> v={"123","00987","83787","099"};
    int maxi=stoi(v[0]);
    for(int i = 1; i< v.size() ; i++){
       
        maxi=max(stoi(v[i]),maxi);

    }
    cout<<maxi;
}