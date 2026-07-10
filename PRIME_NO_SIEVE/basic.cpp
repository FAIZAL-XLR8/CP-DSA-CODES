#include <bits/stdc++.h>
using namespace std;
void isPrime (int n) {
    for (int i = 1; i <= sqrt(n); ++i) {
        if (n % i == 0){
        cout << i << " ";
        }
    }
    for (int i = sqrt (n) -1; i >= 1; --i) // intialiased i with sqrt - 1 coz sqrt waala in
    //included previosuly
    {
        if (n % i == 0) cout << n / i << " ";
    }
}
int main () {
    int n = 60;
isPrime (n);
}
