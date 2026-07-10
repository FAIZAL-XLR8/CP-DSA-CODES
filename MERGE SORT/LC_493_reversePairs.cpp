#include<bits/stdc++.h>
using namespace std;

int ctr = 0;
void merge (vector <int> &arr, vector <int> &firstArray, vector <int> &secondArray) {
    int i = 0, j = 0, k = 0;
    int a = firstArray.size();
    int b = secondArray.size();
    while (i < a && j < b) {
        if (firstArray[i] <= secondArray[j]) {
            arr[k++] = firstArray[i++];
        }
        else
        {
            arr[k ++] = secondArray[j ++];
        }
    }
    while (i < a) arr[k++] = firstArray[i ++];
    while (j < b) arr[k ++] = secondArray[j ++];
}
void compare (vector <int> &firstArray, vector <int> &secondArray) {
    int i = 0;
    int j = 0;
     int a = firstArray.size();
    int b = secondArray.size();
    while ( i < a && j < b) {
        if ((long long)firstArray[i] >(long long) 2 * secondArray[j]) 
        {
                   ctr += (a - i);
            j ++;
     
        }
        else 
        {
            i++;
          
        }
    }
}
    void mergeSort(vector<int> & arr) {

        int n = arr.size();
        if (n == 1) return;
        int n1 = n / 2;
        int n2 = n - n / 2;
        vector <int> firstArray(n1);
        vector <int> secondArray(n2);
        //copying vectors
        for (int i = 0; i < n1; ++i) {
            firstArray[i] = arr[i];
        }
        for (int j = 0; j < n2; ++j) {
            secondArray[j] = arr[j + n1];
        }
        mergeSort (firstArray);
        mergeSort (secondArray);
        compare (firstArray, secondArray);
        merge (arr, firstArray, secondArray);
    } 
    int reversePairs(vector<int>& nums) {
       mergeSort(nums);
       return ctr;
    }
    int main() {
    vector<int> nums = {1, 3, 2, 3, 1};
    cout <<reversePairs(nums);
}