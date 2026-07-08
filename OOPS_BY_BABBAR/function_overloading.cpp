#include <iostream>
#include <string>
class Polymorphism{
    public :
    int salary;
    std :: string name;
    int sum (int a, int b)
    {
        std :: cout << "sum of two numbers" << std :: endl;
    }
    int sum (double x, double y)
    {
        std :: cout << " sum of two doubles" << std :: endl;
    }
    int sum (int x, int y, int z)
    {
       std ::  cout << " sum of three ints" << std :: endl;
    }
};
int main ()
{
    Polymorphism p;
    p.sum(10, 10);
    p.sum(1.1, 1.1);
    p.sum (10, 10 , 10);
}