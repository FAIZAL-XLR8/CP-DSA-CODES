#include <bits/stdc++.h>
using namespace std;
int main() {
    set <int> s;
    map <int, int> m;
    s.insert (5);
    s.insert(8);
    s.insert (11);
    s.insert(1);
    for (auto x : s) cout << x <<" "; // prints values in ascending order// though the access is of O(logn);
    m[1] = 20;
    m[3] = 10;
    m[2] = 1;
    cout << endl;
    for (auto x : m) cout << x.first << " " << x.second << endl; // sorts the key and prints
    map <string, int> map2;
    map2["Faizal"] = 1;
    map2["Ali"] = 2;
    for (auto x : map2) cout << x.first << endl; // prints in the lexographical order
}