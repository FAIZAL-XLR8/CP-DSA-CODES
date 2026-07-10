#include <bits/stdc++.h>
using namespace std;
int main () {
    vector <int> arr = {1, 1, 3, 3, 3, 35, 35, 7, 7, 22, 22, 22, 35};
    //observtion ye hai ki when you do( x and y) its and value is always lesser 
    //than x if (x > y)
    //so the window with max value in the array will be the answer
    int max = INT_MIN;
    int i = 0, j = 0, n = arr.size();
    int windowLen = 0;
    while (j < n) {
        if (arr[j] >= max) {
            max = arr[j];
            windowLen = j - i + 1;

        }
        else i = j;
        j++;
    }
    cout << max << " " << windowLen;
}