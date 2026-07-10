#include<bits/stdc++.h>
using namespace std;
class Student {
    public : 
    static int a;
    static void adde (int n)
    {
        a += n;
    }
    static void displaye ()
    {
        cout << a << endl;
    }
    private : 
    string name;
    int roll; 
    public : 
    Student ()
    {
        a++;
    }
    void add (int n)
    {
        a += n;
    }
    void display ()
    {
        cout << a << endl;
    }

};
int Student :: a = 0;
int main ()
{
    Student a;
    Student b;
    cout << Student :: a << endl;
    Student :: adde (10);
    Student :: displaye();
 b.adde(2);
 b.display();
      Student :: displaye();
    
}