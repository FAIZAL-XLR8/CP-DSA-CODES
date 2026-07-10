#include<bits/stdc++.h>
using namespace std;
class Complex {
    public :
    int real;
     int img;
    int add (int a, int b)
    {
        return a + b;
    }
    int add (char ch, int b)
    {
        return ch + b;
    } //this is function overloading
    Complex (){};
    Complex (int real, int img)
    {
        this -> real = real;
        this -> img = img;
    }
    Complex operator+(const Complex &a)
    {
        Complex c;
        c.real = real + a.real;
        c.img = img + a.img;
        return c;
    }
    void display ()
    {
        cout << real <<"+i "<< img << endl;
    }
};
int main(){
    Complex a(10, 20);
    Complex b (20, 30);
    Complex c = a + b;
    c.display();

}