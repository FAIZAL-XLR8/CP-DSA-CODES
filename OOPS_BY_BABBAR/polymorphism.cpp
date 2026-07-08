/*
poly = many
morphs = forms
many forms
two types compile time polymorphism, runtime polymorphism
during compilation compiler ko pata chlega which function to call
runtime --> knows at runtime which function to call
compile time overloading --> 1) function overoading --> same func name but with different data types parameters or different number of parameters
2) operator overloading --> an operator whicch can do different operation than just it is already defined to
*/
//operator overloading
#include <iostream>
class Complex {
    public :
    int real;
    int cmp;
    Complex(){std :: cout <<"called default constructor \n";}
    Complex (int real, int cmp) : real(real), cmp(cmp)
    {

    }
    //operator iverloading --> syntax
    // Return_type operator (operator_symbol/+/-/() --> restrcted operators = ::, ., ?) (args/ usually another object){
    //code...
    //return ...}
    Complex operator+(const Complex &src_obj)
    {
        Complex temp;
        temp.real = this -> real + src_obj.real;
        temp.cmp = this -> cmp + src_obj.cmp;
        return temp;
    }
    bool operator=(const Complex &src_obj)
    {
        return this -> real == src_obj.real and this -> cmp == src_obj.cmp;
    }
    void display()
    {
        std :: cout << this -> real <<" + i" << this ->cmp << std :: endl;
    }
};
int main ()
{
    Complex A(10, 20);
    Complex B(10,20);
    Complex C = A + B;
    C.display();
     std ::  cout <<  (A=B);
   
}