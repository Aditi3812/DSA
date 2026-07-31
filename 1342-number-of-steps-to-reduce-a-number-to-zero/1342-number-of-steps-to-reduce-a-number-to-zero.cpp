class Solution {
public:
    int numberOfSteps(int num) {
        vector<int> dp(num + 1, 0); 
        if(num<=2)
        {
            return num;
        }
        dp[1] = 1;
        dp[2] = 2;
        for(int i = 3 ; i <= num ; i++)
        {
            if (i%2!=0)
            {
                dp[i] = 1+dp[i-1];
            }
            else
            {
                dp[i] = min(1+dp[i-1], 1+dp[i/2]);
            }
        }
        return dp[num];
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna