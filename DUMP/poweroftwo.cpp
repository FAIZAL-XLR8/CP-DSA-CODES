#include <bits/stdc++.h>
using namespace std;
int main () {
    int n;
    cin >> n;
   int ans = (n & (n-1));
 if (ans == 0) cout << "powr hai" ;
 else cout << "power ni hai";
}