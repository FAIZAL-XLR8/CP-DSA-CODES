#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr = {2, 2, 7, 7, 7, 2, 2, 1};
    string str = "";
    for (int i = 0; i < arr.size(); ++i) {
        str+=to_string(arr[i]);
    }
    int i = 0, j = arr.size()-1;
    while (i<=j) {
       if (arr[i] == arr[j]) 
       {
        i++ , j--;
       }
       else{
        cout << " not a pallindrome ";
        return 0;
       }
      
    }
     cout << " pallindrome ";

}
