#include <bits/stdc++.h> 

int recurse (int currX, int currY, int m, int n, 
vector <vector<int>> &dp)
{
	if (currX >= m  || currY >= n ) return 0;
	if (currX == m - 1 and currY == n - 1) return 1;
	
		//every idx has 2 possibolities 
		if (dp[currX][currY] != -1) return dp[currX][currY];
	int left = recurse (currX + 1, currY, m, n, dp);
		int right = recurse (currX, currY + 1, m, n, dp);
		return dp[currX][currY] = left + right;

	
	
}
int uniquePaths(int m, int n) {
	// Write your code here.
	vector<vector<int>> dp (m, vector <int>(n, -1));
	//recurse(0, 0, m, n, dp);
	if(m == 1 and n == 1) return 1;
	
	//dp[0][0] = 1;
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if(i == 0 and j == 0) 
			{
				dp[0][0] = 1;
			}
			else
			{
				int up = 0;
				int left = 0;
				if (i > 0) up = dp[i - 1][j];
				if (j > 0) left = dp[i][j - 1];
				dp[i][j] = up + left;
			}
		}
	}
return dp[m - 1][n -1];
} 