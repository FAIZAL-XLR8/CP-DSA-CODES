#include <bits/stdc++.h>
using namespace std;
void cyclicSort (vector <int> &arr) {
    int n = arr.size();
    for (int i = 0; i < n ; ) {
        if (arr[i] != i + 1) swap (arr[i], arr[arr[i] - 1]);
        else i++;
    }
}
int main () {
    vector <int> arr = {5, 1, 6, 3, 4, 2};
    cyclicSort (arr);
    for (int i = 0; i < arr.size(); ++i) {
        cout << arr[i] << " ";
    }
}