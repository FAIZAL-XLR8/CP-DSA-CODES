#include <bits/stdc++.h>
using namespace std;
int brian (int n) {
    int ctr = 0;
    //less than O(n) TC
    //BRIAN KENIGHNAR ALGO
    while (n > 0) {
        n = (n & (n - 1)); ctr++;
    }
    return ctr;
}
int main () {
    int x = 7; // 000111 
    int y = 33;// 100001
    cout << brian(x ^y) << endl;
    cout << __builtin_popcount(x^y);
}