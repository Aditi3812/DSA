class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int>dp(cost.size(), 0);
        int s = cost.size();
        dp[s-1] = cost[s-1];
        dp[s-2] = cost[s-2];

        for(int i  = s-3; i>=0; i--)
        {
            dp[i] = min(dp[i+1],dp[i+2]) + cost[i];
        }
        return min(dp[0], dp[1]);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna