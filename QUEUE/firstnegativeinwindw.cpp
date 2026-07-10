#include <bits/stdc++.h> 
vector<int> firstNegativeInteger(vector<int> &arr, int k, int n)
{
 // approach is to first get all the negative elements into the queue and then keep checking i
 // if the front element lies in the range of every window if not then keep popping the front untill it lies
 //int the range

    //Write your code here
    deque <int> dq;
    vector <int> ans;

    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] < 0) dq.push_back(i);
    }
    int i = 0; 
    int j = i + k - 1;
    while (j < n) {
        // we'll keep on popping untill there is a valid index in that range
        while (!dq.empty() &&  dq.front() < i) dq.pop_front();
        if(dq.empty() || dq.front() > j) ans.push_back(0);
      else ans.push_back(arr[dq.front()]);
      i++, j++;
    }
    return ans;
}

