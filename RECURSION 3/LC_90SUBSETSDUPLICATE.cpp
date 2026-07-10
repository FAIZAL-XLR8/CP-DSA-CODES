#include <bits/stdc++.h>
using namespace std;
void helper (string original, string temporaryAns,  bool flag, vector <string> &ans) {
    //base case
    if (original == "") {
        ans.push_back (temporaryAns);
        return;
    }
    char ch = original[0];
    if (original.length() == 1) {
               if (flag == true) helper (original.substr(1), temporaryAns+ch, true, ans);
 helper (original.substr(1), temporaryAns, true, ans);
       
  
        return;    // taaki niiche ki do conditions na chale
    }
    char dh = original[1];
    if (ch == dh ) { //duplicates sambhalega 
      if (flag == true) helper (original.substr(1), temporaryAns+ch,  true, ans);
        helper (original.substr(1), temporaryAns, false, ans); 
          
      
    }
    else { //agal bagl wale duplicates ni hai 
         if (flag == true) helper (original.substr(1), temporaryAns+ch,  true, ans);
       helper (original.substr(1), temporaryAns,  true, ans);
    }
    }



int main () {
    string str = "aab";
    vector <string> ans;
    sort (str.begin(), str.end());
    helper (str, "", true, ans);
    for (int i = 0; i < ans.size(); ++i) {
        cout << ans[i] <<endl;
    }

}