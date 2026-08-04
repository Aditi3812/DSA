class Solution {
public:
    int minDistance(string word1, string word2) {
        vector<vector<int>>dp(word1.size()+1,vector<int>(word2.size()+1,0));
        for(int i = 0 ; i <=word1.size(); i++)
        {
            for(int j = 0 ; j <= word2.size(); j++)
            {
                if(i==0)
                {
                    dp[i][j] = j;
                }
                else if(j==0)
                {
                    dp[i][j] = i;
                }
                else if(word1[i-1]==word2[j-1])
                {
                    dp[i][j] = dp[i-1][j-1];// if both are same then we dont have to do any operations  so the answer will be the same as the previous dagonal;
                }
                else 
                {
                    dp[i][j] = min(min(dp[i-1][j], dp[i][j-1]), dp[i-1][j-1]) + 1;
                }
            }
        }
        return dp[word1.size()][word2.size()];
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna