#include <bits/stdc++.h>
using namespace std;
void merge (vector <int> &arr, vector<int> &firstArray, vector<int> &secondArray) {
    int n = arr.size();
    int n1 = n / 2, n2 = n - n / 2;
    int i = 0, j = 0, k = 0;
    while ( i < n1 && j < n2) {
        if (firstArray[i] >= secondArray[j]) {
            arr[k++] = firstArray[i++];
        }
        else {
            arr[k++] = secondArray[j++];
        } 
    }
    if (i == n1) while (j < n2) arr[k++] = secondArray[j++];
    else while (i < n1) arr[k++] = firstArray[i++];
}
void divide (vector <int> &arr, int n) {
    if (n == 1) return;
    int n1 = n / 2, n2 = n - n / 2;
     // dividing the arrays 
    vector <int> firstArray (n1), secondArray (n2);
    // copying vectors
    for (int i = 0; i < n1; ++i) {
        firstArray[i] = arr[i];
    }
    for (int i = 0; i < n2; ++i) {
        secondArray[i] = arr[i + n1];
    }
    divide (firstArray, n1);
    divide (secondArray, n2);
    merge (arr, firstArray, secondArray);
    firstArray.clear();
    secondArray.clear();

}
int main () {
    vector <int> arr = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = arr.size();
    divide (arr, n);
    for (int i = 0; i < arr.size(); ++i)
    cout << arr[i] << " ";

}