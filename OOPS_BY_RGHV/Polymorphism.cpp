#include <bits/stdc++.h>
using namespace std;
class Cricketer {
    public :
    // same name and data type of type function with different work that it handles
    // function overloading

    int add (int a, int b) {
        return a+b;
    }
    int add (string n, string str) {
        cout << n + str;
        return -1;
    }
  
};
int main () {
    Cricketer t1;
   t1.add ("Faizal" , " Ali");
}