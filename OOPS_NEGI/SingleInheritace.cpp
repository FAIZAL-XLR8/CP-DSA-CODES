#include <iostream>
using namespace std;

class Parent {
public:
    Parent(int a, int b) {
        cout << "Parent constructor: a=" << a << ", b=" << b << endl;
    }
};

class Child : public Parent {
public:
    Child(int p, int q, int r, int s)  : Parent( p, q) // 👈 only 2 args sent to Parent
    {
        cout << "Child constructor: r=" << r << ", s=" << s << " p= " << p << " q= " << q << endl;
    }
};

int main() {
    Child c(1, 2, 3, 4);
}
//same for multilevel just grandparent --> parent --> child