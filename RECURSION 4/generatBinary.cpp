#include <bits/stdc++.h>
using namespace std;
// void generateBinary (vector<string> temporaryAns, int n) {
//     if (temporaryAns.size() == n) {
      
// //     //    for (const auto &bits : temporaryAns) {
// //     //     cout << bits;
// //     //     }
// //     //     cout <<endl;
// //         return;
// //     }
//    temporaryAns.push_back("0");
//    generateBinary ( temporaryAns, n);
//    temporaryAns.pop_back();
//     temporaryAns.push_back("1");
//        generateBinary ( temporaryAns, n);
// }
int n = 3;
void generateBinary (string ans) {
    if (ans.size() == n) {
        cout << ans << endl;
        return;
    }
    generateBinary (ans + '0');
    if (ans.size() == 0 || ans[ans.size() - 1] == '0')
        generateBinary (ans + '1');


}
int main () {
    // int n = 2;
//    vector<vector<string>> ans;
//    vector<string> temporaryAns;
//    generateBinary( temporaryAns, n);
generateBinary ("");
}