#include <bits/stdc++.h>
using namespace std;
int binarySearch (int low, int target, int high, vector <int> &arr) {
    //base case 
    if (high < low) return -1;
    // kaam
     int mid = (low + high) / 2;
    if ( arr[mid] == target) return mid;
    else if ( target > arr[mid]) return  binarySearch (mid +1, target, high, arr);
    else return binarySearch (low, target, mid - 1, arr);
}
// int binarySearch (int low, int target, int high, vector <int> &arr) {
//     int mid;
//      while (low <= high) {
//         mid = (low + high) / 2;
//         if (arr[mid] == target) return mid;
//         else if (target > arr[mid]) low =mid + 1;
//         else high = mid - 1;
//     }
//     return -1;
// }
int main () {
    vector <int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 ,13};
    int low = 0, mid , high = arr.size() - 1;
    cout << binarySearch (low, 6, high, arr);
   
}
