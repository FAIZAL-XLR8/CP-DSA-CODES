#include <bits/stdc++.h>
using namespace std;
int main () {
    multiset <int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(2);
    ms.insert(3);

    
    for (auto x : ms) cout << x; // O / P - > 11123 
    multimap<int, int> mp;
    // mp[1] = 1; this is not allowed in multimaps
    // we insert in this manner
    mp.insert({1,1});
    mp.insert({1, 2});
    mp.insert({2, 2});
    mp.insert({2, 3});
    auto it = mp.find(2);
    cout << it -> second;



}
