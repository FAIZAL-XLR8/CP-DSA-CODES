#include<bits/stdc++.h>
using namespace std;
class A{
    private :
    int x;
    public :
    void show()
    {
        cout << x << endl;
    }
    friend class B; //this make A to access A's private members
    friend void print(const  A&); // give return type function name and its incoming args 

};
class B : public A{
    private :
    int y;
    public :
    B(int x) : A(), y(x)
    {

    }
    void print(const A&a)
    {
        cout << a.x;
    }
};
void print(const A& a)
{
    cout << a.x;
}
int main()
{

}
