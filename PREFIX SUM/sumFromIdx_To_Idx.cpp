#include <bits/stdc++.h>
using namespace std;
int prefixSum (vector <int> &arr, int startIdx, int endIdx) {
// logic ye hai ki jis idx se jis idx tk nikalna hai sum uss endIdx pr prefixSum kya hai
//wo minus startIdx se pehle wale sum ko minus krdo;
for (int i = 0; i < arr.size(); ++i) {
  arr[i] += arr[i - 1];
}
return (arr[endIdx] - arr[startIdx - 1]);
}
int main() {
vector <int> arr = {4, 7, 9, 11, 23, 56, 19};
cout <<  prefixSum (arr, 2, 5);
}