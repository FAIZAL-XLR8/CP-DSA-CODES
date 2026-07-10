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

void quickSort (vector <int> &arr, int startIdx, int endIdx) {

    // base case ye hai ki mereko quick sort kb ni lagana hoga ?
    // jab startingIdx and endIdx barabr ho jaye yaani ek single element ho jaye ya fir 
    //ending element starting se bada ho haye yaani recursion todna hoga

    //base case
     if( startIdx >=  endIdx) return;

     int pivot = partition (arr, startIdx, endIdx);
     quickSort (arr, startIdx, pivot - 1);
     quickSort (arr, pivot + 1, endIdx);
}
int main () {
    //vector to be sorted

    vector <int> arr = {5, 6, 8, 9, 3, 2, 2, 3, 1, -1};
    int n = arr.size();

    // we call the quickSort function to do its magic

    quickSort (arr, 0, n - 1); // we are sending the starting index and ending index where we want to sort
     for (auto &val : arr) {
        cout << val <<" ";
     }
}