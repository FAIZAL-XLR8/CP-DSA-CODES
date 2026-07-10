#include <bits/stdc++.h>
using namespace std;
int main () {
    pair <int, int> p = {1,3}; // can store two things simultaneously
    cout << p.first << " "  << p.second << endl; // o/p-> 1 3
    pair <int, pair<int, int>> p2 = {1, {2,3}};
    cout << p2.first <<" " << p2.second.first << endl; // o/p -> 1 2
    pair <int, int> arr[] = {{1,3}, {3,4}, {9, 0}}; // this is an array of data type pair which uh can storre values of two ppl simultaneously

}
