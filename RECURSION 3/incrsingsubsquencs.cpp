#include<bits/stdc++.h>
using namespace std;
void subsetsOfString (vector<int> resulting, int index, int arr[],int n,int k) {
     
    //base case
        if (index == n) {
            if (resulting.size() == k) {
            for (int i = 0; i < resulting.size(); ++i) {
                cout << resulting[i] << " ";
            }
            }
            cout << endl;
            return;
        }
       // resulting.push_back (arr[index]);
       if (resulting.size()+(n-index) < k) return; //time complexity better ho gya isse 
        subsetsOfString (resulting, index+1, arr, n, k);//this removes a character from string as an input
       // resulting.pop_back ();
        resulting.push_back (arr[index]);
        subsetsOfString (resulting, index+1, arr, n, k); //this appends a character to the result string

}

int main () {
    int arr[] = {1, 2, 3, 4, 5};
    vector <int> resulting; 
    int k =3;
    subsetsOfString (resulting, 0, arr, sizeof(arr)/sizeof(arr[0]),k);
   

}