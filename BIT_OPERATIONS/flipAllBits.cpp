#include<bits/stdc++.h>
using namespace std;
// approach ye hai ki koi bhi number jo hai uske nextpower ka value - 1 tk pahuncha jaa 
//skta by making all setbits as 1 of tht particular number and then adding 1 to it last me
//and this can be achieved by left shifting n by 1 place and taking or then by 2 place and
//then taking or toh double hote jayega set bits untill we reach 11111... by left shifting
//32
long long brian (int n) {
    while (n > 0) {
        if( (n & (n - 1)) == 0) return ((n << 1) - 1);
        else n = n & (n - 1);
    }
}
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
long long prevPowerOf2 (long long n) {
    n = n | (n >> 1); // this makes it damn sure ki 2 setbits ho gya
n = n | (n >> 2);// 4 setbits ho gya
n = n | (n >> 4); // 8 setbits ho gya
n = n | (n >> 8); // 16 setbits ho gya
n = n | (n >> 16);
n = n | (n >> 32);
return n;
}


int main () {
   long long n = 33;
   cout << decimalToBinary (n) << endl;
    cout << "0" + decimalToBinary(n ^ brian (n)); //(prevPowerOf2 (n)));
   
}