#include<iostream>
using namespace std;

int findInArray (int* ptr, int size, int element) {
    //base case
    if (size < 0) return -1;

    int result = findInArray (ptr, size-1, element);
    //check case
    if (ptr[size] == element) {
        cout << element << " found at index " << size << endl;
        return size;
    }
    else return result;
  
}
int main(){
    int nums[] = {1, 2, 3, 4, 5, 5, 5, 6, 7};
    int index =  sizeof(nums) / sizeof(nums[0]) - 1;
    cout << "input the array element to search" << endl;
    int element;
    cin >> element;
    int result = findInArray (nums, index, element);
    if (result == -1) 
    cout << "-1";
}