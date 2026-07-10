#include <bits/stdc++.h>
using namespace std;
class Father {
    public:
    int age;
    string name;
};
class Mother {
    public :
    int age;
    string name;
};
class StepParent {
    protected :
    int age1;
    public:
    void setAge (int age1){
        this -> age1 =age1; 
    }
};
class Child : public Father, public Mother {
    public :
    string nose;
    string face;
    string height;
};
class StepChild : public StepParent{
public :
void display () {
    cout << age1;
}

};
int main  () {
    Child c1;
    c1.Father::name = "Hayat";
    c1.face = "mother";
    c1.height = "Father";
    c1.Mother :: age = 11; 
    StepChild c2;
    c2. setAge(22);
    c2.display();
};
