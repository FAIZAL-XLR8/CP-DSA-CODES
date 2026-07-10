#include <bits/stdc++.h>
using namespace std;
int partition (vector <int> &arr, int pivotEle,int si, int ei) {
    int ctr = 0;
    for (int i =  si + 1; i <=ei;++i) if(arr[i] <= arr[si]) ctr++;
    int pivotIdx = si + ctr;
    swap(arr[pivotIdx], arr[si]);
    int i = 0, j = pivotIdx + 1;
    while (i < pivotIdx && j <= ei) {
        if (arr[i] > arr[pivotIdx] && arr[j] <= arr[pivotIdx]) {
            swap(arr[i++], arr[j++]);
            
        }
        else if (arr[j] > pivotEle) j++;
        else if (arr[i] <= pivotEle) i++;
    }
    return pivotIdx;
    
}
void quickSort(vector <int> &arr, int si, int ei) {
    if (si >= ei) return;
    int pivotEle = arr[si];
    int pivotIdx = partition(arr, pivotEle,si,ei);
    quickSort(arr,si, pivotIdx -1);
    quickSort(arr,pivotIdx + 1, ei);


}
void merge (vector<int> &arr, vector<int> &firstArray, vector<int> &secondArray){
        int n1 = firstArray.size();
        int n2 = secondArray.size();
        int i = 0,  j = 0, k = 0;
        while (i < n1 && j < n2) {
            if (firstArray[i] <= secondArray[j]) arr[k++] = firstArray[i++];
            else arr[k++] = secondArray[j++];
        }
        while (i < n1) arr[k++] = firstArray[i++];
        while (j < n2) arr[k ++] = secondArray[j++];
}
void mergeSort(vector<int> &arr, int startIdx, int endIdx) { // merge is stable
     int n = arr.size();
    if( n == 1) return;
   
    int n1 = n / 2;
    int n2 = n - n1;
    vector <int> firstArray(n1);
    for (int i = 0 ; i < n1; ++i) firstArray[i] = arr[i];
    vector <int> secondArray(n2);
    for (int i = 0 ;    i < n2; ++i) secondArray[i] = arr[i + n1];
    mergeSort(firstArray, 0, n1 - 1);
    mergeSort(secondArray, n1, n - 1);
    merge(arr, firstArray,secondArray);

}
void print (vector <int> &arr) {
    for (auto &x : arr) cout << x <<" ";
    cout << endl;
}
int main () {
    vector <int> arr = {9, 7, 3, 2, 5, 8, 1, 6, 6};
    vector <int> arr2 = arr;
    int n = arr.size();
   quickSort(arr, 0, n - 1);
    //mergeSort(arr2, 0, n -1);
    print (arr);
}