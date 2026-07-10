#include <bits/stdc++.h>
using namespace std;
void combinationsCoins ( vector<int> ans, vector <int> &original, int money, int index) {
    if ( money == 0) 
    {
        for (const auto & answers : ans) {
            cout << answers;
        }
        cout << endl;
        return;
    }
    if (money < 0) return;
    for ( int i = index; i < original.size(); ++i) {
        ans.push_back(original[i]);
        combinationsCoins (ans, original, money - original[i],i);
        ans.pop_back();
    }
    // ans.push_back(2);
    // combinationsCoins (ans, original, money-2);
    // ans.pop_back();
    //  ans.push_back(3);
    // combinationsCoins (ans, original, money-3);
    // ans.pop_back();
    // ans.push_back(5);
    // combinationsCoins (ans, original, money-5);
}
int main () {
    vector <int> original = {2,3,5};
    int money = 8;
    vector <int>  ans;
    combinationsCoins (ans, original, money, 0);
}
