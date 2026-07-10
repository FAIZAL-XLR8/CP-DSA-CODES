//ques states that
// Given two arrays, val[] and wt[], representing the values and weights of items, and an integer capacity representing the maximum weight a knapsack
//  can hold, determine the maximum total value that can be achieved by putting items in the knapsack. You are allowed to break items into fractions
//   if necessary.
//   Input: val[] = [60, 100, 120], wt[] = [10, 20, 30], capacity = 50
// Output: 240.000000
// Explanation: Take the item with value 60 and weight 10, value 100 and weight 20 and split the third item with value 120 and weight 30, 
// to fit it into weight 20. so it becomes (120/30)*20=80, so the total value becomes 60+100+80.0=240.0 Thus, total maximum value of item we can have 
// is 240.00 from the given capacity of sack


class Solution {
  public:
  using pi = pair <double,pair<int, int>> ;
  class customComp {
      public :
      
      bool operator() (pi a, pi b){
          return a.first > b.first;
         
      }
  };
  double cutToSixDecimal(double &prof) {
      return ceil(prof * 1e6) /1e6;
  }
    double fractionalKnapsack(vector<int>& val, vector<int>& wt, int capacity) {
        // code here
        vector <pi >ratio;
        for (int i = 0; i < val.size(); ++i) {
            ratio.push_back({val[i]/ (double) wt[i], {wt[i], i}});
        }
        sort(ratio.begin(), ratio.end(), customComp());
        int idx = 0;
        double prof = 0.0;
        while (idx < val.size() && capacity > 0) {
            int currWt = ratio[idx].second.first;
            int currIdx = ratio[idx].second.second;
            if (currWt <= capacity) {
                prof += val[currIdx];
                capacity -= wt[currIdx];
                idx++;
            }
            else {
                prof += ratio[idx].first * capacity;
                capacity = 0;
            }
        }
        return prof;
        
    }
};
