#include<bits/stdc++.h>
using namespace std;
void subsetsOfString (vector<string> &resulting, string result, string input) {
     
    //base case
        if (input == "") {
           
            resulting.push_back(result);
            return;
        }
        subsetsOfString (resulting,result, input.substr(1));//this removes a character from string as an input
        subsetsOfString (resulting,result + input[0], input.substr(1)); //this appends a character to the result string

}

int main () {
    string str = "abc";
    vector <string> resulting; 
    subsetsOfString (resulting, "", str);
    sort(resulting.begin(), resulting.end());
    for (int i =0; i < resulting.size(); ++i) {
        cout << "--------" <<endl;
        cout << resulting[i] <<endl;
    }
}