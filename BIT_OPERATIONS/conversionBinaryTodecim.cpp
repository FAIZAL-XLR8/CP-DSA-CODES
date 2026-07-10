#include <bits/stdc++.h>
using namespace std;
string decimalToBinary (int num) {
    string result = "";
    while (num > 0) {
        if ((num & 1) == 0) {
            // even hai abhi to prepend karo 0 ko result mein
            result = "0" + result;
        }
        else {
            // odd hai yaani 1 ko prepend krna hai result me
            result = "1" + result;
        }
        num >>=  1;
    }
    return result;
}
int binaryToDecimal (string str) {
    int n =  str.length () ;
    int i = n - 1, sum =  0;
    while (i >= 0) {
        // sum += (str[i] - '0') * pow (2, n - i - 1);
        sum += (str[i] - '0') * (1 << (n - i - 1));
        i--;
    }
    return sum;
}
int main () {
    string str = "100100";
    int num = 36;
    cout << binaryToDecimal (str) << "\n";
    cout << decimalToBinary (num) << "\n";

}