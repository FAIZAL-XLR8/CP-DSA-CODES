#include<bits/stdc++.h>
using namespace std;
string removeOccurrence (string str, string empty, int len, char find) {
      //base case
    if (len == -1) return "";
    empty = removeOccurrence (str, empty, len-1,find);
    char curr = str[len];
    if (curr != find) {
        empty+=curr;
   }
    return empty;
}
int main() {
    string name = "faizal ali";
    cout << removeOccurrence (name, "", name.length()-1, 'a');
}