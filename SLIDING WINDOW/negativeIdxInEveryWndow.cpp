#include <bits/stdc++.h>
using namespace std; 
int main () {
    vector <int> arr = {-8, 2, 3, -6, 10};
    int n = arr.size();
    int  k = 2;
    int i = 0, j = k - 1;
    int frstIdx = -1;
    vector <int> ans (n - k  + 1);
    for (;i <= j; ++i) {
        if (arr[i] < 0) {
            frstIdx = i;
            break;
        }
    }
    frstIdx == -1 ? ans[0] = 0 : ans[0] = arr[frstIdx];
    
    i = 1, j = k;
    while (j < n) {
        if (frstIdx >= i) // ENSURES P IS STILL INSIDE NEW WINDOW
        ans[i] = arr[frstIdx];
        else{
            bool flag = false;
            //we search for the firstIdx in the new Window
            for (frstIdx = i; frstIdx <=j; ++frstIdx)
            {
                if (arr[i] < 0) {
                    flag = true;
                    frstIdx = i;
                    ans[i] = arr[frstIdx];
                    break;
                }
            }
            if (flag != true) ans[i] = 0;
        }
        i++, j ++;
    }
    for (auto &val : ans) cout << val << " ";
}