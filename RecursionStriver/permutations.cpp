#include <bits/stdc++.h>
using namespace std;
// used extra space
//  void permute (string s, string str, vector<string> &ans, vector <int> &m) {
//      if(s.length() == str.length()) {
//          ans.push_back(s);
//          return;
//      }
//      for (int i = 0; i < str.length(); ++i) {
//          if(i > 0 && str[i] == str[i - 1] && m[i - 1] == 0) continue;
//          if(m[i] == 0) {
//          s += str[i];
//          m[i] = 1;
//          permute (s, str, ans,m);
//          s.pop_back();
//          m[i] = 0;
//          }
//      }
//  }

// swapping techmique

void permute(string str, vector<string> &ans, int idx)
{
    if (idx == str.length() - 1 )
    {
        ans.push_back(str);
        return;
    }
    for (int i = idx; i < str.length(); ++i)
    {
        if (i > idx && str[i] == str[i - 1])
            continue;
        swap(str[idx], str[i]);
        // recurse
        permute(str, ans, idx + 1);
        // backtrack
        swap(str[idx], str[i]);
    }
}
int main()
{
    string str = "caa";
    sort(begin(str), end(str));
    vector<string> ans;
    // vector <int> map(str.length(), 0);
    // permute ("", str, ans,map);
    permute(str, ans, 0);
    for (auto &x : ans)
    {
        cout << x << " ";
    }
}