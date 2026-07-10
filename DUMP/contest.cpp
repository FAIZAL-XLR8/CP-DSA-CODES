#include <bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin >> t;
  int arr[25]= {0};
    int sum = 0;
    
    
        for (int i = 0; i <t; ++i) {
            int n;
            cin >> n;
            string s;
            cin>>s;
            sum = 0;
            sort (s.begin(), s.end());
    for (int i = 0 ; i < 25; ++i) arr[i] = 0;
            for (int i = 0; i < n - 1; ++i) {
              if (arr[i] == arr[i + 1]) arr[s[i] - 'A'] ++;
            }
            if (s[n - 1] == s[n - 2]) arr[s[n- 1] - 'A'] ++;
            else arr[s[n -1] - 'A']++;
            for (int i =0;i < 25; ++i) {
                if (arr[i] == 1) sum +=2;
                else if(arr[i]> 1)sum+= (arr[i] + 1);
            }
            cout << sum<<endl;
        }
    
    
}


