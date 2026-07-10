#include<bits/stdc++.h>
using namespace std;
  int ctr = 0;
  int inversion (vector <int> firstArray, vector <int> secondArray) {
    int i = 0, j = 0, count = 0;
    while (i < firstArray.size() && j < secondArray.size()) {
        if(firstArray[i] > secondArray[j]) {
            count+= (firstArray.size() - i);
            j ++;
        }
        else{
            i++;
        }
    }
    return count;
  }
void merge (vector <int> &arr, vector <int> &firstArray, vector <int> &secondArray) {
  int i = 0, j = 0, k= 0;
  int n1 = firstArray.size();
  int n2 = secondArray.size();
  int n = n1 + n2;
   while (i < n1 && j < n2) {
    if (firstArray[i] <= secondArray[j])
    {
        arr[k++] = firstArray[i++];
    }
    else {
        arr[k++] = (secondArray[j++]);
    }
   }
   if (i == n1) while (j < n2) arr[k++] = secondArray[j++];
   else while (i < n1) arr[k++] = firstArray[i++];
}
void mergeSort (vector <int> &arr) {
    int n = arr.size();
    if ( n == 1) return;
    int n1 = n / 2;
    int n2 = n - n/2;
    vector <int> firstArray (n1);
    vector <int> secondArray (n2);
    for (int i =0; i < n1; ++i) {
        firstArray[i] =  (arr[i]);
    }
    for (int i = 0; i< n2; ++i) {
        secondArray[i] = (arr[i + n1]);
    }
    mergeSort (firstArray);
    mergeSort (secondArray);
    ctr+=  inversion (firstArray, secondArray);
    merge (arr,  firstArray, secondArray);
    firstArray.clear();
    secondArray.clear();
}
int main() {
    vector <int> arr = {5, 1, 8, 2, 3};
    //int ctr = 0;
    // int n = arr.size();
    // for (int i = 0; i < n - 1; ++i) {
    //     for (int j = i + 1; j < n; ++j) {
    //         if (arr[i] > arr[j]) ctr ++;
    //     }
    // }
    mergeSort(arr);
    cout << ctr;
}