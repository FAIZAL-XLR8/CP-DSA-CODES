#include <bits/stdc++.h>
using namespace std;
class Student {
    private : 
    int marks;
    protected :
    string name;
    public : 
    int roll;
};
class Faizal : private Student {
    protected : 
    void display ()
    {
        cout << roll << " roll hai " << endl;
        cout << name << " name hai " << endl;
    }
    void fill (string name, int roll)
    {
        this -> name = name;
        this -> roll = roll;
    }
};
class Grim : public Faizal {
    public : 
    void displayStats ()
    {
        fill ("hahah", 1010);
        display();
    }
};
int main ()
{
    Grim ali ;

    //ali.fill("alpha", 50);
    ali.displayStats();
}