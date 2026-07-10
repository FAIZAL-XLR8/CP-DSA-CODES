#include<iostream>
using namespace std;

void reverseArray (int* ptr, int size) {
    //base case
    if (size < 0) return;

    //recursive call;

    cout << ptr[size];
    reverseArray (ptr, size-1);
}
int main(){
    int nums[] = {1, 2, 3, 4, 5, 6, 7};
    int index =  sizeof(nums)/sizeof(nums[0])-1;
    reverseArray (nums, index);
}