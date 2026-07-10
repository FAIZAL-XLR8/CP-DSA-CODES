#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
  
    cin >> t;
      cin.ignore();
    string str;
    for (int i = 0; i < t; ++i) {
        getline (cin, str);
        reverse(str.begin(), str.end());
        for (int i= 0; i < str.length(); ++i) {
            if (str[i] == 'p') str[i] = 'q';
            else if (str[i] == 'q') str[i] = 'p';
        }
          for (int i =0; i < str.length(); ++i)
    {
        cout << str[i];
    }
    cout << endl;
    }
  
}