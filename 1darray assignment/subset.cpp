#include<bits/stdc++.h>
using namespace std;
bool check (vector<int> &a, vector<int> &b) {
      for (int i=0, j=0; j < b.size() || i < a.size();  ) {
        if (a[i] > b[j]) return false;
        else if (a[i] < b[j]) {
            i++;}
        else  {
        i++ , j++;
        }
    }
    return true;
}

int main(){
    vector<int> a = {1, 2, 12,3, 4, 11, -11, 22,0, 100};
    vector<int> b = {1, 2,12, 3, -11, 100};
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    cout<<check(a,b);
  
    
}