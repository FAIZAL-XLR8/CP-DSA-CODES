#include<bits/stdc++.h>
using namespace std;
// approach ye hai ki koi bhi number jo hai uske nextpower ka value - 1 tk pahuncha jaa 
//skta by making all setbits as 1 of tht particular number and then adding 1 to it last me
//and this can be achieved by left shifting n by 1 place and taking or then by 2 place and
//then taking or toh double hote jayega set bits untill we reach 11111... by left shifting
//32
long long prevPowerOf2 (long long n) {
    n = n | (n >> 1); // this makes it damn sure ki 2 setbits ho gya
n = n | (n >> 2);// 4 setbits ho gya
n = n | (n >> 4); // 8 setbits ho gya
n = n | (n >> 8); // 16 setbits ho gya
n = n | (n >> 16);
n = n | (n >> 32);
return (n + 1) / 2;
}

long long nextPowerOf2 (long long n) {
n = n | (n >> 1); // this makes it damn sure ki 2 setbits ho gya
n = n | (n >> 2);// 4 setbits ho gya
n = n | (n >> 4); // 8 setbits ho gya
n = n | (n >> 8); // 16 setbits ho gya
n = n | (n >> 16);
n = n | (n >> 32);
return n + 1;
}
int main () {
   long long n = 33;
    cout << nextPowerOf2 (n) << " \n";
    cout << prevPowerOf2 (n);
}