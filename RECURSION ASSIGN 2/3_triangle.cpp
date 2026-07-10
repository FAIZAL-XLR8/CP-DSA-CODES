#include<bits/stdc++.h>
using namespace std;
void sumTriangle (vector<int>&ptr, int size) {
    // recursive call
    if (size < 0) return;
    //agar output aisa chahiye 
    //48
    //2028  
    //81216
    //3579
    //12345

    //toh ye call pehle hoga
    //  vector<int> nums;
    // for (int i = 0; i < size - 1; ++i) {
    //     nums.push_back(ptr[i] + ptr[i+1]);
    // }
    //   sumTriangle (nums, size-1);

    // kaam
    for (int i = 0; i < size; ++i) {
        cout << ptr[i];
    }
    cout << endl;
    
    //agar output aisa chahiye
    //12345
    //3579
    //81216
    //2028
    //48
    
    //call baad me
    vector<int> nums;
     for (int i = 0; i < size - 1; ++i) {
       nums.push_back(ptr[i] + ptr[i+1]);
     }
       sumTriangle (nums, size-1);

   
    

 
}

int main () {
    vector<int>v = {1, 2, 3, 4, 5};
    sumTriangle ( v, v.size());
}
