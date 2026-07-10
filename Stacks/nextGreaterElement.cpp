#include <bits/stdc++.h>
using namespace std;
int main () {
    vector <int> arr = {4, 12, 5, 3, 1, 2, 2, 5, 3, 1, 1, 2, 4, 6};
    // approach : for every ques of array to find next Greater element we traverse from backwars
    // and now we store every number using stack and 
    //check for previously came stack greater than that number
    // by popping the smaller elements
    // popping wont lose ans coz for next elements current element
    /// will be the greater one
    //so get rid of the elemnts that are smaller than current
    // from stack
    // consider the numbers to be lightpoles and you to be standing left to
    // every ligthpole , youll see the lightppoles greataer than current lightpoles only
    stack <int> st;
    int  n = arr.size();
    vector<int> nge(n);
    for (int i = n - 1; i >= 0; --i) {
        while(!st.empty() && arr[i] >= st.top()) {
            st.pop();
        }
        if (st.empty()) {nge[i] = -1;
            st.push(arr[i]);
        }
       
        else { // arr[i] >= st.top()
            nge[i] = st.top();
            st.push(arr[i]);
            // look for the element which is greater than the current element while removing the smaller ones in the way becuase for the next element left to current 
            //, the current will be either the greater one or element greater than the current in stack after removing elements smaller than the current
            // search
        }
    }
    for (int i = 0; i < nge.size(); ++i) {
        cout << nge[i] << " ";
    }
}