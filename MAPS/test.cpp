#include <bits/stdc++.h>
using namespace std;
using pi = pair <int, int>;
//# define  pi pair<int, int> //define "your given datatype name" as(is silent) original datatype
//alternative use kar skte something like typedef pair <int, int> pi; idhr ulta hai 
bool customComp (pi a, pi b) {
    if (a.first!= b.first) return a.first < b.first;
    else return a.second < b.second;

}
int main () {
    vector <pi> v = {{2,1}, {1,4}, {9,8}};
    sort(begin(v), end(v), customComp);
    for (auto &x: v) {
        cout << x.first <<" : "  << x.second << " ";
    }
}//flmwmldlqdmkwmq