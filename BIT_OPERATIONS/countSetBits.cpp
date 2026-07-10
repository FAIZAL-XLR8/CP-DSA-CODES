#include <bits/stdc++.h>
using namespace std;
int main () {
    int n = 10;
    int ctr = 0;
    //less than O(n) TC
    //BRIAN KENIGHNAR ALGO
    while (n > 0) {
        n = (n & (n - 1)); ctr++;
    }
    //O(n) TC
    // while (n > 0) {
    //     if (n % 2 == 0) ctr ++;
    //     n >>= 1;
    // }
    cout << ctr;
   // cout << __builtin_popcount(n); directly counts number of setbits;
}