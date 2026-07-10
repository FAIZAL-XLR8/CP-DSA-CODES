//uh are given a array of non negative integers
//find smallest missing integer
#include<bits/stdc++.h>
using namespace std;
int main() {
    vector <int> arr = {0, 1, 2, 3, 4, 6, 9, 11, 14};
    int low = 0;
    int high = arr.size() - 1;
    int mid, ans = -1; // considering ki sb shi hoga
    while (low <= high) {
        mid = low + (high - low) / 2;
        if (arr[mid] == mid) {
            //matlab search space righ side of mid hai
            low = mid + 1;
        }
        else {
            //yaani barabar ni hua toh search space mera left hai
        //can be potential answer but we will still be looking for left area for the smallest
        //number
            ans = mid;
            high = mid - 1;
        
        }
    } 
    cout << ans;
}