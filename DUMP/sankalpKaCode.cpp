#include <bits/stdc++.h>
using namespace std;
int main () {
    string str = "BANANA";
    int i = 0, j = 0;
    int stuart = 0, kevin = 0;
    int n = str.length ();
    while (j < n) {
         
        if (str[j] == 'A' || str[j] == 'E' || str[j] == 'I'|| str[j] == 'O'||str[j] == 'U'){
            stuart += n - j;
        }
        else{
            kevin +=n - j;
        }
        
       
        j++;
    }
  if (kevin > stuart) cout << "kevin is the winner " << kevin;
  else cout << "stuart is the winner " << stuart;
}