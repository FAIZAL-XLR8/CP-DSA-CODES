#include <bits/stdc++.h>
using namespace std;
int partition (vector <int> &arr) {
    // prefix sum creation 
int n = arr.size();
    for (int i = 1; i < arr.size(); ++i)
    arr[i]+= arr[i - 1];
// partition me kya hoga ki last tk sum - jis index se start hora partition - 1 idx tk sum minus krdo

bool flag = false;
    for (int i = 0; i < arr.size(); ++i) 
    {
        if (2 * arr[i] == arr[n - 1]) flag = true;
    }
    cout << flag;

}
int main () {
    vector <int> arr = {1, 2, 3, 4, 5, 5, 10};
    partition (arr);
}