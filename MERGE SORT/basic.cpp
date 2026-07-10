#include<bits/stdc++.h>
using namespace std;
void merge(vector <int> &v, vector<int> &firstArray, vector <int> &secondArray, int n1, int n2)
{
 int i = 0;
 int j = 0;
 int k =0;
 // comparing two arrays and changing in sorted array each time two arrays are being created
 while ( i < n1 && j < n2) {
    if (firstArray[i] <= secondArray[j]) v[k++] = firstArray[i++];
    else v[k++] = secondArray[j++];
 }

 if (i == n1) while (j < n2) v[k++] = secondArray[j++];
 else while (i < n1) v[k++] = firstArray[i++];
}
void divide (vector <int> &arr, int n) {
    if (n == 1) return;
     int n1 = n / 2, n2 = n - n / 2;
     //creating two arrays recursively
    vector <int> firstArray (n1) , secondArray (n2);
    for ( int i =0; i < n1; ++i) {
        firstArray[i] = arr[i];
    }
     for ( int i =0; i < n2; ++i) {
       secondArray[i] = arr[i + n1];
    }
    //recursive calls
    divide (firstArray, n1);
    divide (secondArray, n2);
    merge (arr, firstArray, secondArray, n1,n2);
}
int main() {
    vector <int> arr = {9, 9, 8, 6, 5, 4, 2};
    int n = arr.size();
    divide (arr, n);
    for (int i = 0; i< n; ++i) 
    cout << arr[i] <<" ";
}