#include <bits/stdc++.h>
using namespace std;
//unique elements array and target
void permute (vector <int> &arr, vector <int> &ans, int idx, vector<vector<int>> &finalAns,int target) {
   // koi particular target milega usko banaa na hai
   
    if(target == 0)  {finalAns.push_back(ans);
    return;
    }
   
    for (int i = idx; i  < arr.size(); ++i) {
        if (i > idx && arr[i] == arr[i - 1]) continue;
        if (arr[i] > target) break;
       
        ans.push_back(arr[i]);
        permute (arr, ans, i + 1, finalAns, target - arr[i]);
        ans.pop_back();
        
    }
}
int main () {
    // pehle sort kr lenge taaki if ek particular index ke baad se ans aana bnd ho jayega toh aage se bhi band ho jayega --> therefore no further 
    //calls
    vector <int> arr = {1, 2, 1, 2, 1}; // 1,1,1,2,2
    int target = 4;
    vector <int> ans;
    vector <vector<int>> finalAns; // one way is to prroduce all the combos and put it into the hashset to avoid duplicates then print all the ans
    sort(begin(arr), end(arr));
    int idx = 0;
    permute (arr, ans, idx, finalAns, target);
    for (auto &x: finalAns) {
        for (auto &y : x)
        cout << y << " "; 
        cout << endl;
    }
}