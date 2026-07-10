#include <bits/stdc++.h>
using namespace std;
void findDuplicates (vector <int> &arr) {
    int n = arr.size();
    int res = 0;
    for (int i = 0; i < n; ++i) res ^= arr[i]; // 1 ^ 9 == 0001
                                               //       == 1001
                                            //xor val      1000
    
    // finding the setbit position
    int k = 0;
    int findres = res;
    while (true) {
        if ((findres & 1) == 1) break;
        else {
            findres >>= 1;
            k++;}
    }
    int resval = 0;
    for (int i = 0; i < n; ++i) {
        if (((arr[i] >> k) & 1) == 1) resval ^= arr[i];
    }
    cout << resval << endl;
    cout << (res ^ resval);
}
int main () {
    vector <int> arr = {3, 3, 2, 2, 4, 4, 1, 9};
    findDuplicates (arr);
}