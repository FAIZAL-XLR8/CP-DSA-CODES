#include <bits/stdc++.h>
using namespace std;
int main() {
    //lower bound means agr wo element hota toh kaha hota ?
    vector <int> v = {1, 2, 4, 55, 66, 220, 555, 1000};
    int low = 0;
    int high = v.size() - 1;
    int mid;
    int target;
    cout << "enter the target to find  " << endl;
    cin >> target;
    bool flag = false;
    while ( low <= high) {
        mid = low + ( high - low ) / 2;
        if ( v[mid]== target ) {
            cout << v[mid+1];
            flag = true;
            break;
        }
        if (v[mid] > target) high = mid - 1;
        if (v[mid] < target) low = mid + 1;

    }
    //case to check if element was not in the array 
    //tab upper bound ho jayega arr[low]
    if (flag == false) {
        cout << v[low];
    }
}