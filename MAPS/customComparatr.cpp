#include <bits/stdc++.h>
using namespace std;
using pi = pair <int, int>;
//# define  pi pair<int, int> //define "your given datatype name" as(is silent) original datatype
//alternative use kar skte something like typedef pair <int, int> pi; idhr ulta hai 


//this is function pointer
bool customComp (pi a, pi b) {
    if (a.first!= b.first) return a.first < b.first;
    else return a.second < b.second;

}

// functor or function object
class myComparator{
    public :
    bool operator()(pi a, pi b){ // function overloading in class
        if(a.first!= b.first)
        return a.first < b.first;
    return a.second < b.second;
    }
};

int main () {
     auto myComp = [](pi a, pi b){
    if (a.first != b.first) return a.first < b.first;
    else return a.second < b.second;
   };
    // auto myComp = [](a,b){//function defination};
    vector <pi> v = {{2,1}, {1,4}, {9,8}};

     sort(begin(v), end(v), customComp); //--> function pointer
     // sort(begin(v), end(v), myComparator()); ---> function object

    //sort(begin(v), end(v), myComp); // ----> lambda expression
    for (auto &x: v) {
        cout << x.first <<" : "  << x.second << " ";
    }
  

}