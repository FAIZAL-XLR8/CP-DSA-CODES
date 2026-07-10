#include <bits/stdc++.h>
using namespace std;
int main() {
vector <int> nums = {1, 2, 3, 3, 3, 3, 3,  4, 5 ,6, 11, 111};
int target = 3;
vector<int> ans = {-1, -1}; // Default result
        
        // Search for the first occurrence
        int low = 0, high = nums.size() - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target) {
                ans[0] = mid; // Update the first position
                high = mid - 1; // Continue searching on the left
            } else if (nums[mid] > target) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        
        // Search for the last occurrence
        low = 0;
        high = nums.size() - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target) {
                ans[1] = mid; // Update the last position
                low = mid + 1; // Continue searching on the right
            } else if (nums[mid] > target) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        
        cout << ans[0] << " " << ans[1];
    }