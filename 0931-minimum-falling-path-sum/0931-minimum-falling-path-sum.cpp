class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int r = matrix.size();
        int c= matrix[0].size();
        vector<vector<int>>dp(r,vector<int>(c,0));
        int minsum = INT_MAX;
        if(matrix.size()==1)
        {
            for(int z = c-1; z>=0; z--)
            {
                minsum = min(minsum, matrix[0][z]);
            }
            return minsum;
        }
        for(int i = r-1; i>=0; i-- )
        {
            for(int j = c-1;j>=0; j--)
            {
                if(i==r-1)
                {
                    dp[i][j] = matrix[i][j];
                    continue;
                }
                if(j == c-1)
                {
                    dp[i][j] = min(dp[i+1][j], dp[i+1][j-1]) + matrix[i][j];
                }
                else if(j==0)
                {
                    dp[i][j] = min(dp[i+1][j], dp[i+1][j+1]) + matrix[i][j];
                }
                else
                {
                    dp[i][j] = min(min(dp[i+1][j], dp[i+1][j-1]),dp[i+1][j+1]) + matrix[i][j];
                }
                if(i==0)
                {
                    minsum = min(minsum, dp[i][j]);
                }
            }
        }
        
        return minsum;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna