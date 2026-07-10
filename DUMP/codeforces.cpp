#include <bits/stdc++.h>
using namespace std;
int main () {
  int t; 
  cin >> t;
 


  
  for (int i = 0; i < t; ++i) {
    int n, a, index= 0, product = 1;
    cin >> n;
    vector <int> arr;
    
    for (int i =0; i < n; ++i) {
        cin >> a;
        arr.push_back (a);
    }
    for (int i = 1; i < n; ++i){
        if (arr[index] >= arr[i]) {
         index = i;
        }
    }
     arr[index] += 1; 
    for (int i = 0; i < n; ++i){
        product *= arr[i];
    }
    cout << product<<endl;
    
  }
}