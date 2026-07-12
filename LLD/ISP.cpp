//each interface should be purpose specific such that inheriting classes don't have methods to ovverride which isnt useful to them
#include<bits/stdc++.h>
using namespace std;
class TwoD{
    public :
    virtual double area() = 0;
    virtual double perimeter() = 0;
 };
 class ThreeD : public TwoD{
    public :
    virtual double volume() = 0;

 };
 class Square : public TwoD{
    private :
    int side;
    public:
    Square(int side) : TwoD(), side(side){}
    double area() override{
        return 1.0 * side * side;
    }
    double perimeter() override
    {
        return 4.0 * (side);
    }
 };
 class Cube : public ThreeD{
    private : 
    int side;
    public :
    Cube (int side) : side(side){};
    double area() override{
        return 6.0 * side * side;
    }
    double perimeter() override
    {
        return 6.0 * (side);
    }
    double volume () override{
        return 1.0 * side * side * side;
    }
 };

int main()
{
    Square* sq = new Square(10);
    cout << fixed << setprecision(2) << sq -> area() << endl;
    cout << fixed << setprecision(2) << sq -> perimeter() << endl;
    Cube* cb = new Cube (10);
    cout << fixed << setprecision(2) << cb -> volume() << endl;
    cout << fixed << setprecision(2) << cb -> area() << endl; 
    cout << fixed << setprecision(2) << cb-> perimeter() << endl; 
}