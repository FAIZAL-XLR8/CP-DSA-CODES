#include<bits/stdc++.h>
using namespace std;
int partition (vector <int> &arr, int startIdx, int endIdx) {
    int pivotElement = arr[startIdx];
    int ctr = 0;
    for (int i = startIdx+ 1; i <= endIdx; ++i) {
        if (pivotElement > arr[i]) ctr ++;
    }
    int pivot = startIdx + ctr;
    swap (arr[startIdx], arr[pivot]);
    int i = startIdx; int j = endIdx;
    while ( i < pivot && j > pivot) {
        if (arr[i] > pivotElement && arr[j] <= pivotElement) swap (arr[i++], arr[j--]);
        else if ( arr[i] <= pivotElement) i ++;
        else if (arr[j] > pivotElement) j--;
    }
    return pivot;
}
void quickSort (vector <int> &arr, int startIdx, int endIdx) {
    if (startIdx >= endIdx) return;
    int pivot = partition (arr, startIdx, endIdx);
    quickSort(arr, startIdx, pivot - 1);
    quickSort(arr, pivot + 1, endIdx);

}
int main () {
    vector <int> arr = {5, 1, 6, 2, 7, 6, 3, 4};
    for (auto &val : arr) {
        cout << val << " ";
    }
    cout << endl;
    int n = arr.size();
    quickSort (arr, 0, n - 1);
     for (auto &val : arr) {
        cout << val << " ";
    }

}