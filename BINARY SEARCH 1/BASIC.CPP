#include <bits/stdc++.h>
using namespace std;
int main ( ){
    vector <int> v = {1, 2,3 , 4, 5, 6, 7, 8, 11, 44, 489};
    
    int low = 0;
    int high = v.size() - 1;
    int mid;
    int target;
    cout << " enter the target " <<endl;
    cin >> target;
    while ( low <= high) {
        mid = low + (high - low) / 2;
        if ( v[mid] == target) {
            cout << mid;
            break;
        }
        else if (v[mid] > target) {
            high = mid - 1;
        }
        else // < hoga
        low = mid + 1;
    }
}
