#include <bits/stdc++.h>
using namespace std;
int miniProd(vector<int> &arr, int n)
{
    int ctrZero = 0;
    int ctrNeg = 0;
    int maxNeg = INT_MIN;
    int prodPos = 1;
    int prodNeg = 1;
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] == 0)
            ctrZero++;
        else if (arr[i] > 0)
        {
            prodPos *= arr[i];
        }
        else if (arr[i] < 0)
        {
            ctrNeg++;
            prodNeg *= arr[i];
            maxNeg = max (maxNeg, arr[i]);
        }
    }
    if (ctrNeg == 0)
    {
        if (ctrZero > 0) return 0;
        else 
        {
           auto it = min_element(arr.begin(), arr.end());
           return *it;

        }    
    }
    else 
    {
        //even number of negatives
        if (ctrNeg % 2 == 0)
        {
            prodNeg /= maxNeg;
        }
        //odd number of negatives me kuch nahi karna hai
        return prodNeg * prodPos;
    }
}
int main()
{
    vector <int> arr = {-2, -3, 0, -4, -2, -5}; 
    int n = arr.size();
    cout << miniProd(arr, n);
}