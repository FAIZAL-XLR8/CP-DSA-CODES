int minSubsetSumDifference(vector<int>& nums, int n)
{
	// Write your code here.
	//mod(s1 - s2) minimise karna hai s1 + s2 = s
        //tabulation likho fo rsubset sum and at idx =  n - 1 will give uh the possible subset sums
        //which is marked as true --> x axis = target Sum or susbset sums
        //y axis is the indices so at index = 4 yaani idx = 4 tak target = 0 to  fullArray sum rkh du 
        // to jo jo possible subsequence sum hai wo s1 ho jayega aur s2 = sum - s1 aur donon ka diff min is ans
       
        int totalSum = accumulate(nums.begin(), nums.end(), 0);

        vector<vector<bool>> dp(n, vector<bool>(totalSum + 1, false));

        // Base case
        for(int i = 0; i < n; i++)
            dp[i][0] = true;

        if(nums[0] <= totalSum and nums[0] >= 0)
            dp[0][nums[0]] = true;

       
        for(int i = 1; i < n; i++) {
            for(int target = 1; target <= totalSum; target++) {
                bool notTake = dp[i-1][target];
                bool take = false;
                if(nums[i] <= target)
                    take = dp[i-1][target - nums[i]];
                dp[i][target] = take || notTake;
            }
        }

        int mini = INT_MAX;
        for(int s1 = 0; s1 <= totalSum / 2; s1++) {
            if(dp[n-1][s1]) {
                mini = min(mini, abs(totalSum - 2*s1));
            }
        }

        return mini;
}
