#include <bits/stdc++.h>
using namespace std;
vector <int> prefixSum (vector <int> &arr) {
    // with extra space 

    // vector <int> ans;
    // int sum = 0;
    // for (int i = 0; i < arr.size(); ++i) {
    //     sum += arr[i];
    //     ans.push_back(sum);
    // }
    // return ans;
    int n = arr.size();
    for (int i = 1; i < n; ++i) {
    arr[i] = arr[i] + arr[i - 1];
    }
}
int main () {
    vector <int> arr = {1, 4, 5, 3, 2, 7};
   vector <int> ans =  prefixSum (arr);
     for (int i = 0; i < arr.size(); ++i) {
    //  cout << ans[i] << " ";
    cout << arr[i] << " ";
    }
}