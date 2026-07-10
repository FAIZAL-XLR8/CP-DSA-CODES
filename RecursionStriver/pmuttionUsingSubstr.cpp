#include <bits/stdc++.h>
using namespace std;
void permute (string original, string ans,  vector<string> &finalAns) {
    if (original == "") {
        finalAns.push_back(ans);
        return;
    }
    for (int i = 0; i < original.length(); ++i) {
        ans += original[i];
        string left = original.substr(0, i);
        string right = original.substr(i + 1);
        permute (left + right, ans, finalAns);
    }
}
int main () {
    string str = "abc";
    string ans ="";
  vector<string> finalAns;
    permute (str, ans, finalAns);
    for (auto &x : finalAns) cout << x << " ";
}