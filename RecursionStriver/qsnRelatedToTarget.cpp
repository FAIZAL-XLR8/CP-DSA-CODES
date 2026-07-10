#include <bits/stdc++.h>
using namespace std;
//unique elements array and target
void permute (vector <int> &arr, vector <int> &ans, int idx, vector<vector<int>> &finalAns,int target) {
   // koi particular target milega usko banaa na hai
   if (idx == arr.size()) {
    if(target == 0)  finalAns.push_back(ans);
    return;
   }
    if(arr[idx] <= target) {

        ans.push_back(arr[idx]);
        permute (arr, ans,idx, finalAns, target - arr[idx]);
        ans.pop_back();
    }
    permute(arr, ans,idx + 1, finalAns, target);
}
int main () {
    // pehle sort kr lenge taaki if ek particular index ke baad se ans aana bnd ho jayega toh aage se bhi band ho jayega --> therefore no further 
    //calls
    vector <int> arr = {2, 3, 1, 4, 5};
    int target = 4;
    vector <int> ans;
    vector <vector<int>> finalAns;
    sort(begin(arr), end(arr));
    int idx = 0;
    permute (arr, ans, idx, finalAns, target);
    for (auto &x: finalAns) {
        for (auto &y : x)
        cout << y << " "; 
        cout << endl;
    }
}