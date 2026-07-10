#include<bits/stdc++.h>
using namespace std;
int main () {
    vector <int> arr = {-2, -3, 4, -1, -2, 1, 5, -3};
    int maxim = INT_MIN;
    int sum= 0;
    int n = arr.size();
    //brute force
    // for (int i = 0; i<n; ++i) {
    //     for (int j = i; j < n; ++j) {
    //         sum = 0;
    //         for (int k = i; k <= j; ++k) {
    //             sum += arr[k];
    //         }
    //     maxim = max (sum, maxim);
    //     }
    // }
    //btr approach O(n2)
// for (int i = 0; i<n; ++i) {
//     sum = 0;
//          for (int j = i; j < n; ++j) {
//          sum += arr[j];
            
//          maxim = max (sum, maxim);
//          }
//     }
//     cout << maxim;
//kadane's algo
int maxi = INT_MIN;
int start;
int startIndex = -1;
int endIndex = -1;
for (int i = 0; i < n; i++) {
    if (sum == 0) {
        start = i;
    }
    //kaam
    sum += arr[i];
    if (sum > maxi) {
        maxi = sum;
        startIndex = start; //checkmark created pehle hee to mark beginning of subarray
        endIndex = i; //jab tak sum zyada hai max se tab tak note down kr lete
    } 
    if (sum < 0) { //why carry negative's to the future? better be 0
        sum = 0;
    }
}
cout << maxi <<" " << startIndex << " " << endIndex;
}