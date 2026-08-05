class Solution {
public:
    int climbStairs(int n, vector<int>& nums) {
        vector<int>dp(n+1,0);
        dp[n] = 0;
        for(int i = n-1 ; i >=0; i--)
        {
            if (i + 1 <= n) {
                dp[i] =  dp[i + 1] + nums[i] + 1;
            }
            if (i + 2 <= n) {
                dp[i] = min(dp[i], dp[i + 2] + nums[i+1] + 4);
            }
            if (i + 3 <= n) {
                dp[i] = min(dp[i], dp[i + 3] + nums[i+2] + 9);
            }
        }
        return dp[0];
    }
};     
//  e
//       4 -> i  --> j = i+1 --> 4+ 1 = 5
//     3 -> min(dp[i+1], dp[i+2]+2^2), dp[i+3]+3^3 +nums[i]
//   2 
// 1 

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna