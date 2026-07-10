#include <bits/stdc++.h>
using namespace std;
int main () {
    // pairs class
    // pair <string, char> p; // first denotes the key and second denotes value
    // pair <int, string> s;
    // pair <char, int> t;
    // p.first = "Faizal";
    // p.second = 'F';
    // cout << " my is name is " << p.first << " with an " << p.second << endl;  
    // // basically we can store values at pair if we want
     unordered_map<string,int> m;
    // // map me poora pair store hota hai;
    // m.insert(p);
    // for (pair<string, int> element: m) {
    //     cout << element.first << " " << element.second << endl;
    // }
    // // can be used auto in eaxh loop too
    // for (auto p : m) {
    //     cout << p.first <<" " << p.second << endl;
    // }
    // insertion ka doosra tarika is 
    m["Faizal"] = 70; // mention the map's variable name["first key"] = value;
    m["Ali"] = 33;
     for (auto p : m) {
        cout << p.first <<" " << p.second << endl;
    }
    cout << m.size() << endl;
    cout << "First print done" << endl;
    m.erase ("Faizal");
    // m.erase ("Ali");
      for (auto p : m) {
        cout << p.first <<" " << p.second << endl;
    }
    cout << m.size() <<endl;
    cout << m["Ali"]; // this give the value of this particular key 
    

}
