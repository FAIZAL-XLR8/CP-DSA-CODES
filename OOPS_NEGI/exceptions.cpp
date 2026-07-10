#include <bits/stdc++.h>

using namespace std;
int main ()
{
    try {
        int *arr = new int [10000000000];
        throw "exception of bad allocation!";
        delete arr;
    }catch (const char* e)
    {
        cout << e;
    }

}