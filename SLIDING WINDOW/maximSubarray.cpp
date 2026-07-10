#include <bits/stdc++.h>
using namespace std;
int main () {
    vector <int> arr = {7, 1, 2, 5, 8, 4, 9, 3, 6};
    int sum = 0;
    int n = arr.size ();
    int maxi = INT_MIN;
    int k = 3;
    // for (int i = 0; i <= n - k; ++i) {
    //     for (int j = i; j < i + k; ++j) {
    //         sum += arr[j];
    //     }
    //     maxi = max (maxi, sum);
    //     sum = 0;
    // }

    //SLIDING WINDOW
    int prevWindowSum = 0;
    for (int i = 0; i < k; ++i) prevWindowSum += arr[i];
  
    int i = 1, j = k;
int currWindowSum;
    while (j < n) {
        currWindowSum = prevWindowSum + arr[j] - arr[i - 1];
        maxi = max (currWindowSum, maxi);
        prevWindowSum = currWindowSum;
        i++, j++;
    }
    cout << maxi;
}