class Solution {
  public:
  int recurse (vector <int> &dp, int currIdx, int k, int n, vector<int> &nums)
  {
      if (currIdx  < 0) return INT_MAX;
      if (currIdx  == 0) return 0;
      if (dp[currIdx] != -1) return dp[currIdx];
      int maxi = INT_MAX;
      for (int i = 1; i <= k; ++i)
      {
          int sum = recurse (dp, currIdx - i, k, n, nums);
         int  finalSum = (sum == INT_MAX) ? INT_MAX : sum + 
         abs(nums[currIdx] - nums[currIdx - i]);
         maxi = min (maxi, finalSum);
      }
      return dp[currIdx] = maxi;
  }
    int minCost(vector<int>& nums) {
        // Code here
        int n = nums.size();
        if (n == 1) return 0;
        vector <int> dp(n, -1);
        int currIdx = n - 1;
        recurse (dp, currIdx, 2, n, nums);
        return dp [n - 1];
        
    }
};