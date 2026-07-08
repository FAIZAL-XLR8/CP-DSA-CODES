#include <iostream>
using namespace std;
class Alpha
{
public:
    static int ctr;
    static void display()
    {
        cout << "prints the display" << endl;
    }
};
int Alpha::ctr = 10;
int main()
{
    cout << Alpha :: ctr;
    Alpha :: display();
    // above two lines works fine w/o objects existence 
}