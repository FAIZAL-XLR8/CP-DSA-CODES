#include<bits/stdc++.h>
using namespace std;
//sir's soln
    int maximum (int* ptr, int index, int size) {
        if (index == size) return INT_MIN;
        return max(ptr[index], maximum (ptr, index+1, size));

    }
        
        //my soln
// int maximum ( int* ptr, int size, int max) {
//     int max1 = ptr[size-1];
//     if (size == 0) return max;
//     if (max < max1)
//     max = ptr[size-1];
//     maximum ( ptr, size-1,max);
// }
int main() {
    int arr[] = {1111, 2, 3, 44, 55, 666, 7, 77, 88};
    int size = sizeof(arr)/sizeof(arr[0]);
//my call--->     cout << maximum (arr, sizeof(arr)/sizeof(arr[0])-1, arr[sizeof(arr)/sizeof(arr[0])-1]);
   cout <<  maximum (arr, 0, size); //sir's call
 }