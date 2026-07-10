// C++ program to demonstrate working of an algorithm that finds
// an element in an array of infinite size
#include <bits/stdc++.h>
using namespace std;
// Binary search function to find the element 
// in a given range

int ans (vector <int> arr, int target, int low, int high) {
  	while (low<= high)
    {
      int mid = low + (high - low) / 2;
      if (arr[mid] == target) return mid;
      else if (arr[mid] > target )  high = mid - 1;
      else low = mid + 1;
        
       
      }
    low = high + 1;
  high = low * 2 + 1;
    return ans(arr, target, low, high);
}
int findPos (vector<int> arr, int target) {
int low = 0;
int high = 1;

if (target > arr[high])
{
  low = high + 1;
  high = low * 2 + 1;
  //applying binary search in this section
}
  return ans(arr, target, low, high);
}
        int main() {

    vector<int> arr = {3, 5, 7, 9, 10, 90, 100, 130, 140, 160, 170, 180, 190, 200, 220, 1111};
    int k = 190;
    int ans = findPos(arr, k);
    cout << ans;
    return 0;
}