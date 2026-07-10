// Implementing maxHeap
#include <bits/stdc++.h>
using namespace std;
class MaxHeap {
    public : 
     vector <int> arr;
     int currIdx ;
     int maxSize;
    MaxHeap (int sizeK) {
       for (int i = 0; i < sizeK; ++i) arr.push_back(0);
        currIdx = 0;
        maxSize = sizeK;
    }
    void push(int ele) {
        if (currIdx >= maxSize) {
            cout << " No elements can be pushed any further " << endl;
            return;
        }
        arr[currIdx] = ele;
       int  idx = currIdx;
       int leftChild = 2 * idx + 1;
       int rightChild = 2 * idx + 2;
       int parent = (idx - 1) / 2;
        while (idx != 0) {
            if (arr[idx] > arr[parent]) {
                swap (arr[idx], arr[parent]);
                idx = parent;
            }
            else break;
        }
        currIdx++;

    }
    int size () {
        return currIdx;
    }
    void display () {
        for (int i = 0; i  < currIdx; ++i) cout << arr[i] <<" ";
        cout << endl;

    }
    void pop () {
        if (currIdx == 0) return;
        currIdx--;
        arr[0] = arr[currIdx];
       int  idx = 0;
      
        while (true) {
             int leftChild = 2 * idx + 1;
            int rightChild = 2 * idx + 2;
            if (leftChild >= currIdx) break;
            if (rightChild >= currIdx) { // check only for left Child
            if (arr[leftChild] > arr[idx]) {
                swap (arr[leftChild], arr[idx]);
                idx = leftChild;
            }
                 break;
        }
        if (arr[leftChild] > arr[idx] && arr[leftChild] >= arr[rightChild]) {
            swap (arr[leftChild], arr[idx]);
            idx = leftChild;
        }
        else if (arr[rightChild] > arr[idx] && arr[rightChild] > arr[leftChild]) {
            swap (arr[rightChild], arr[idx]);
            idx = rightChild;
        }
        else break;
       }
      
       
    }
};
int main () {
    MaxHeap *pq = new MaxHeap (10);
    pq -> push(10);
    pq -> push(11);
    pq -> push(-1);
    pq -> push(-11);
    pq -> display();
    pq -> pop();
    pq -> display();
}
