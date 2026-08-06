class Solution {
public:
    bool isSubsequence(string s, string t) {
        vector<vector<int>>dp(s.size()+1, vector<int>(t.size()+1,0));
        int m = s.size();
        int n = t.size();
        int j;
        for(int i =0 ; i <=m; i++)
        {
            for(j = 0 ; j <=n; j++)
            {
                if(i==0 || j==0)
                {
                    dp[i][j] =0;
                    continue;
                }
                else if(s[i-1] == t[j-1])
                {
                    dp[i][j] = dp[i-1][j-1] +1;
                }
                else if(s[i-1] != t[j-1])
                {
                    dp[i][j] = max(dp[i][j-1],dp[i-1][j]);
                }
            }
            if(i!=0 && dp[i-1][j-1]== dp[i][j-1])
            {
                return false;
            }
        }
        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna