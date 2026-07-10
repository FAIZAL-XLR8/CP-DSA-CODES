#include <bits/stdc++.h>
using namespace std;
int partition (vector <int> &arr, int startIdx, int endIdx) {
    int pivotElement = arr[(startIdx + endIdx) / 2];
    int ctr = 0;

     //searching for pivotElement's original spot in the array

     for (int i = startIdx; i <= endIdx; ++i) {
        if (i == (startIdx + endIdx) / 2) continue;
        else if (arr[i] <= pivotElement) ctr ++;
    }

    int pivotIdx = startIdx + ctr;
    swap (arr[(startIdx + endIdx) / 2], arr[pivotIdx]);

    // Now the trading starts --> we will keep swapping elements accordingly

    int i = startIdx, j = endIdx;
    while (i < pivotIdx && j > pivotIdx) {
        if (arr[i] > pivotElement && arr[j] <= pivotElement) swap (arr[i++], arr[j--]); 
         else if ( arr[i] <= pivotElement) i ++;
        else if (arr[j] > pivotElement) j--;
    }
    return pivotIdx;
    }
int  quickSelect (vector <int> &arr, int startIdx, int endIdx, int k) {

    
    int pivotIdx = partition (arr, startIdx, endIdx); 
    if (pivotIdx == k - 1) return arr[pivotIdx];
    if (pivotIdx > k - 1)
    return quickSelect (arr, startIdx, pivotIdx - 1, k);
    else
     return quickSelect (arr, pivotIdx + 1, endIdx, k);

}
int main () {
vector <int> arr = {6, 5, 4, 1, 3, 7,  3, 2};
int k = 3;
int n = arr.size();
cout << quickSelect (arr, 0, n - 1, k);
}
