// the tageline to include is #inlcude <undordered_set>
#include <bits/stdc++.h>
using namespace std;
int main () {
    unordered_set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    // for each loop
    for (int element : s) // auto element : means in 
    // therefore will be read as element of int type in set s
    {
        cout << element <<" "; // will print elements in random order
    }
    cout << endl;
    // to find an element if it exists we use the syntax
    // s.find(element) != s.end() // s.end() is the value that will be returned if
    // no such values exists
    if (s.find(3) != s.end()) // means we found the element 
    cout << "Found the value  " << endl;
    else cout << " doesnt exits" << endl; 
}