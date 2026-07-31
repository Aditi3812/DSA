class Solution {
public:
    int dp(vector<int>& nums, int s , int e)
    {
        vector<int>dp(nums.size(),0);
        if(nums.size() ==1)
        {
            return nums[0];
        }
        dp[s] = nums[s];
        if(s==e)
        {
            return dp[s];
        }
        dp[s+1] = max(dp[s],nums[s+1]);
        for(int i = 2; i <=e; i++)
        {
            dp[i] = max(dp[i-1],nums[i]+dp[i-2]);
        } 
        return dp[e];
    }
    int rob(vector<int>& nums) {
        int e = nums.size()-1;
        int s = 0;
        int a1 = dp(nums, s, e-1);
        int a2= dp(nums, s+1, e);
        return max(a1,a2);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna