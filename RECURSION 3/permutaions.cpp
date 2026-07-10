#include <bits/stdc++.h>
using namespace std;
void permutations (string original,string ans) {
    if (original =="") {
      cout << ans <<endl;
      return;
    }
    for (int i = 0; i < original.length(); ++i) {
       ans += original[i];
        string left = original.substr(0,i);
        string right = original.substr(i+1);
  permutations (left + right, ans);
  ans.pop_back();
    }
  
}
int main () {
    vector <string> ans;
    string str = "abc";
    
    permutations (str, "");
   
}
