#include <iostream>
using namespace std;
// int gcd (int mini, int a, int b) {
//      for (int i = mini; i >= 2; i--) {
//         if (a %i == 0 && b% i == 0) return i;
//     } 
//     return 1;
// }
int gcd (int mini, int maxi) {
    if (maxi%mini == 0) {
        return mini;
    }
   return gcd (maxi%mini, mini);
}
int main () {
    int a , b;
    cin >> a >> b;
    // int mini =min (a,b);
    // int maxi = max(a,b);
    // cout << gcd (mini,maxi);
    cout << gcd (a,b); // if a < b ---> still a % b = a only qki remainder dega eg 27 % 45 le to 27 hee hoga ans 
                        //bada chota kazroorat ni hai dena
   
}