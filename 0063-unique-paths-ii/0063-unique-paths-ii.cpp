class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& ob) {
        int row = ob.size();
        int col= ob[0].size();
        vector<vector<long>>dp(row, vector<long>(col, 0));
        dp[row-1][col-1] = 1;
        if(ob[row-1][col-1] == 1) {
            dp[row-1][col-1] = 0;
        }
        else
        {
            dp[row-1][col-1] =1;
        }

        for(int i = row-1; i>=0; i-- )
        {
            for(int j = col-1;j>=0; j-- )
            {
                if(i==row-1 && j == col-1)
                {
                    continue;
                }
                if(ob[i][j] == 1)
                {
                    dp[i][j] = 0;
                    continue;
                }
                if(i == row-1)
                {
                    dp[i][j] = dp[i][j+1];
                }
                else if(j == col-1 )
                {
                    dp[i][j] = dp[i+1][j];
                }
                else 
                {
                    dp[i][j] = dp[i+1][j]+dp[i][j+1];
                }
            }
        }
        return dp[0][0];
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna