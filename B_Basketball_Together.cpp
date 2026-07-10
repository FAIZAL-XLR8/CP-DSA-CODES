#include <bits/stdc++.h>
using namespace std;
using ll = long long;



int main() {

   
  
    
        int n;
        int  d;
        cin >> n;
        cin >> d;

    vector<int> p(n);
    for (int i = 0; i< n; ++i)
    {
        cin >> p[i]; 
    }
    sort(rbegin(p), rend(p));

    int l = 0, r = n - 1;
    int ctr = 0;
    //100 90 80 70 60 50
    while (l <= r)
    {
        int needed;
       if(p[l] != 0)  needed = (d + p[l] ) / p[l];
       if(l + needed - 1 <= r) 
       {
        ctr++;
        r -= needed - 1;
        l++;
       }
        else break;
        
    }
  

    cout << ctr << endl;
    
   
   
}