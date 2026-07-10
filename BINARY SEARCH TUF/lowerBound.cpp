#include <bits/stdc++.h> 
using namespace std;
int main () {
    vector <int> v = {1, 3, 4, 6, 7, 8, 20, 33, 44};
    int lb = v.size(); // by defination lb is the index where arr[index] >= x where x is the
                        //element to find note we are not looking for the element 
                        //to find we are just looking for index which will be >= the element 
                        //what we are searching for
    int low = 0, high = v.size() - 1;
    int mid;
    int x;
    cout << "enter the number to find " << endl;
    cin >> x;
    // while (low <= high) {
    //     mid = (low + high) / 2;
    //     //maybe an answer
    //     if (v[mid] >= x) {
    //         lb = mid;
    //         //looking for smaller answer
    //         high = mid - 1;
    //     }
    //     else // < x ho gya
    //     low = mid + 1;

    // }
    // cout << lb;
    

    //direct way to implrment to find lower bound
    //lb = lower_bound (v.begin(), v.end(), x) - v.begin();
    lb = lower_bound (v.begin()+3, v.begin() +6, x) - v.begin(); // when we shorted the search
                                                                       //space
    cout << lb;
}