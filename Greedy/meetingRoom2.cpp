 #include <bits/stdc++.h>
 using namespace std;

 int minMeetingRooms(vector<vector<int>> &arr) {
        // Write your code here
        vector<int> startMeet;
        vector<int> endMeet;
        for (auto &vec : arr) {
            startMeet.push_back(vec[0]);
            endMeet.push_back(vec[1]);
        }
        sort(begin(startMeet), end(startMeet));
        sort (begin(endMeet), end(endMeet));
        int i = 0;
        int j = 0;
        int n = startMeet.size();
        int rooms = 0;
        int maxRooms = 0;
        while (i < n)
        {
            if (startMeet[i] < endMeet[j])
            {
                rooms++;
                i++;
            }
            else  {
                j++;
                rooms--;
            }
            maxRooms = max(maxRooms, rooms);
        }
        return maxRooms;
    }
     int main () {
    vector <vector<int>> arr = {{1, 10}, {2, 7}, {3, 19}, {8, 12}, {10, 20}, {11, 30}};
        cout << minMeetingRooms(arr);
 }