#include <bits/stdc++.h>
using namespace std;
class Fraction {
    public :
    int num;
    int den;
    Fraction(int num, int den) {
        this -> num = num;
        this -> den = den;
    }
    Fraction operator+ (Fraction f) {
        int newNum = this -> num * f.den + f.num * this -> den;
        int newDen = this -> den * f.den;
       
        if (newNum == newDen) return Fraction (1, 1);
        return Fraction (newNum, newDen);
        // return ans;
    }
    // Fraction add (Fraction f) {
    //     int newNum = this -> num * f.den + f.num * this -> den;
    //     int newDen = this -> den * f.den;
    //    return Fraction (newNum, newDen);
    //     // return ans;
    // }
    void display () {
        cout << this -> num << " / " << this-> den;
    }
};
int main () {
    Fraction f1 (1, 3);
    Fraction f2(2, 3);
    Fraction f3 = f1 + f2;
    //Fraction f3 = f1.add(f2);
    f3.display();
}