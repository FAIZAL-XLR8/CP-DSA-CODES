// Implementing min Heap
#include <bits/stdc++.h>
using namespace std;
class MinHeap {
    public :
     int arr [10];
     int currIdx ;
     MinHeap() {
        currIdx = 0;
     }
     void push (int ele) {
        arr[currIdx] = ele;
        int idx = currIdx;
        while (idx != 0){
            if (arr[idx] < arr[(idx - 1) /  2]) {
                swap(arr[idx], arr[(idx - 1) / 2]);
            idx = (idx - 1) / 2;
            }
            else break;
        }
        currIdx++;
     }
     void remove(int idx) {
      currIdx--;
         arr[idx] = arr[currIdx];
         //rearrangement
         while (true) {
            int leftChild = 2 * idx + 1;
            int rightChild = 2 * idx + 2;
            if (leftChild >= currIdx) break;
            if (rightChild >= currIdx) {
               if (arr[leftChild] < arr[idx]) swap (arr[leftChild], arr[idx]);
               break;
            }
            if (arr[leftChild] <= arr[rightChild] && arr[leftChild] < arr[idx]) {
               swap(arr[leftChild], arr[idx]);
               idx = leftChild;
            }
            else if (arr[rightChild] < arr[leftChild] && arr[rightChild] < arr[idx]) {
               swap (arr[rightChild], arr[idx]);
               idx = rightChild;
            }
            else break;
         }
     }
     void print() {
       for (int i = 0; i < currIdx; ++i) {
         cout << arr[i] <<" ";
        
       }
       cout << endl;
     }
     void pop() {
      if (currIdx == 0) return;
      currIdx--;
      int idx = 0;
      arr[0] = arr[currIdx];
    
      while (1) {
         int leftChild = 2 * idx + 1;
         int rightChild = 2* idx + 2;
         if (leftChild >= currIdx)  break; 
         if (rightChild >= currIdx) {
            // check only for left child
            if (arr[leftChild] < arr[idx]) {
               swap (arr[leftChild], arr[idx]);
               idx = leftChild;
              
            }
             break;
         }
         if (arr[leftChild] <= arr[rightChild] && arr[idx] > arr[leftChild]) {
            swap (arr[leftChild], arr[idx]);
            idx = leftChild;
         }
         else if (arr[rightChild] < arr[leftChild] && arr[idx] > arr[rightChild]) {
            swap (arr[rightChild], arr[idx]);
            idx = rightChild;

         }
         else break;
      }
         
     } //    0,1,   101, 10 , 11, 101 curridx 
     int top() {
        return arr[0];
     }
     int size () {
        return currIdx ;
     }
   
};
int main () {
   
    MinHeap *mh = new MinHeap();
  
    mh -> push(10); //
    mh -> push(1);
    mh -> push(-1);
    mh -> pop();
    mh -> print();
    mh -> push(0);
    mh -> push(11);
    mh -> push(101);
   mh -> print();
    mh -> remove(1);
   mh -> print();
   cout <<  mh -> top() << endl;
   cout << mh -> size();
}