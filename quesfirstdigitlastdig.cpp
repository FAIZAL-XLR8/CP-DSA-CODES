#include<iostream>
using namespace std;
// void digit(int a)
// {
//     int ld=a%10;
//      int fd;
//     while(a!=0)
//     {
//          fd=a%10;
//         a/=10;
//     }
//     cout<<"frst digit "<<fd<<" last digit "<<ld;
// }
void digit(int &n,int &p1, int &p2)
{
    p2=n%10;
    while(n>9)
    {
        n/=10;
    }
    p1=n;
}
int main()
{
    int x;
    cin>>x;
    int firstdigit, lastdigit;
    // int *ptr1=&firstdigit;
    // int *ptr2=& lastdigit;


    digit(x,firstdigit,lastdigit);
    cout<<"frst and last of "<<x<<" "<<firstdigit<<" "<<lastdigit;

}