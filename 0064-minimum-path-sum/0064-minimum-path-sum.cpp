class Solution {
public:
    int minPathSum(vector<vector<int>>& nums) {
        int rows= nums.size();
        int cols =nums[0].size();
        vector<vector<int>>dp(rows, vector<int>(cols,0));
        dp[rows-1][cols-1] = nums[rows-1][cols-1];
        for(int i = rows-1; i >=0; i--)
        {
            for(int j = cols-1;j>=0; j--)
            {
                if(i==rows-1&& j==cols-1)
                {
                    continue;
                }
                if(i==rows-1)
                {
                    dp[i][j] = dp[i][j+1] + nums[i][j];
                }
                else if(j==cols-1)
                {
                    dp[i][j] = dp[i+1][j]+ nums[i][j];
                }
                else
                {
                    dp[i][j] = min(dp[i+1][j], dp[i][j+1]) + nums[i][j];
                }
            }
        }
        return dp[0][0];
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna