#include <bits/stdc++.h>
using namespace std;
void subarrays (vector <int> & original, vector <int>  ans, int index) {
    if (index == original.size()) {
        for (int i = 0; i < ans.size(); ++i) {
            
  cout << ans[i];
        }
        cout << endl;
        return;
    }
    subarrays (original, ans, index+1);
    if (ans.size() == 0 || ans[ans.size()-1] == original[index-1]) {
        
        ans.push_back (original[index]);
           subarrays (original, ans, index+1);
    }
  
}
int main () {
    vector <int> arr = {1,2,3,4};
    // brute force solution
    // for (int i =0; i < arr.size(); ++i) {
    //     for (int j=0; j <arr.size (); ++j) {
    //         for (int k = i; k<=j ; ++k) {
    //             cout << arr[k];
    //         }
    //         cout << endl;
    //     }
    // }
    vector <int> ans;
    subarrays (arr, ans, 0);

}