#include <bits/stdc++.h>
using namespace std;
class SegmentTree {
    public : 
    vector <int> vec;
    SegmentTree(int n)
    {
        vec.assign(2 * n, 0);
    }
    void buildTree (vector<int> &arr,  int curr_l, int curr_r, int curr_tree_idx)
{
    if(curr_l == curr_r) 
    {
        vec[curr_tree_idx] =  arr[curr_r];
        return;
    }
    int mid = (curr_l + curr_r) >> 1;
    int left_idx = 2 * curr_tree_idx + 1;
    int right_idx = 2 * curr_tree_idx + 2;
    buildTree(arr, curr_l, mid, left_idx);
    buildTree(arr, mid + 1, curr_r, right_idx);
    vec[curr_tree_idx] = vec[left_idx] + vec[right_idx];


}
int query (int l, int r, int idx, int l1, int r1)
{
    if (l >= l1 and r <= r1) return vec[idx];
    if (l > r1 || r < l1) return 0;
    int mid = (l + r) >> 1;
    int left_idx = 2 * idx + 1;
    int right_idx = 2 * idx + 2;
    int left = query(l, mid, left_idx, l1 ,r1);
    int right = query (mid + 1, r, right_idx, l1, r1);
    return left + right;
}

};

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = arr.size();
    SegmentTree st = SegmentTree(n);
    // build the segment tree
    int curr_l = 0, curr_r = n - 1, curr_tree_idx = 0;
     st.buildTree (arr, 0, n - 1, 0);
     for (auto ele : st.vec) cout << ele << " ";
     cout << endl;
     cout <<  st.query(0,n-1,0, 5, 9);
     
}