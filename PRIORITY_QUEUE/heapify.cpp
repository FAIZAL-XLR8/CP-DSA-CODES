#include <bits/stdc++.h>
using namespace std;
void maxHeapify(int currIdx, int arr[] , int n){
        int i = currIdx;
        while (true) {
            int leftChild = 2 * i + 1;
            int rightChild = 2 * i + 2;
            if (leftChild >= n) break;
            if (rightChild >= n) { // check only for leftChild
                if (arr[i] < arr[leftChild]) swap (arr[i], arr[leftChild]);
                break;
            }
            if (arr[leftChild] >= arr[rightChild] && arr[i] < arr[leftChild]) {
                swap (arr[leftChild], arr[i]);
                i = leftChild;
            }
           else if (arr[rightChild] > arr[leftChild] && arr[i] < arr[rightChild]) {
                swap (arr[rightChild] ,arr[i]);
                i = rightChild;
            }
            else break;
        }
}
    void minHeapify (int currIdx, int arr[], int  n) {
        int i = currIdx;
        while (true) {
            int leftChild = 2 * i + 1;
            int rightChild = 2 * i + 2;
            if (leftChild >= n) break;
            if (rightChild >= n) { // check only for leftChild
                if (arr[i] > arr[leftChild]) swap (arr[i], arr[leftChild]);
                break;
            }
            if (arr[leftChild] <= arr[rightChild] && arr[i] > arr[leftChild]) {
                swap (arr[leftChild], arr[i]);
                i = leftChild;
            }
           else if (arr[rightChild] < arr[leftChild] && arr[i] > arr[rightChild]) {
                swap (arr[rightChild] ,arr[i]);
                i = rightChild;
            }
            else break;
        }
    }
    void print (int arr[], int n) {
        for (int i = 0; i < n; ++i) cout << arr[i] << " ";
        cout << endl;
    }
int main () {
    int  arr[] = {10, 2, 4, 11, 1, 14}; // create the min heap for this array
                 //0, 1,  2, 3, 4 , 5
    int n = sizeof(arr)/sizeof(arr[0]);
    
    print (arr, n);
    cout << "----------------------------------------------" << endl;
    cout << " MINHEAP IS " ;
    int arrMin[] = {10, 2, 4, 11, 1, 14};
    for (int i = (n / 2) - 1; i >= 0; --i) { // from index 2 to 0 will all heapify while the last 4 nodes are leaf Nodes
        minHeapify(i, arrMin, n);
    }
    print (arrMin, n);
    cout << " MAXHEAP IS " ;
    int arrMax[] = {10, 2, 4, 11, 1, 14};
    for (int i = (n / 2)- 1; i >= 0; --i) {
        maxHeapify(i, arrMax,n);
    }
    print (arrMax, n);
}