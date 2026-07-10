#include<bits/stdc++.h>
using namespace std;
void subsetsOfString (vector<int> resulting, int index, int arr[],int n) {
     
    //base case
        if (index == n) {
            for (int i = 0; i < resulting.size(); ++i) {
                cout << resulting[i] << " ";
                
            }
            cout << endl;
            return;
        }
       // resulting.push_back (arr[index]);
        subsetsOfString (resulting, index+1, arr, n);//this removes a character from string as an input
       // resulting.pop_back ();
        resulting.push_back (arr[index]);
        subsetsOfString (resulting, index+1, arr, n); //this appends a character to the result string

}

int main () {
    int arr[] = {1, 2, 3};
    vector <int> resulting; 
    subsetsOfString (resulting, 0, arr, sizeof(arr)/sizeof(arr[0]));
   

}