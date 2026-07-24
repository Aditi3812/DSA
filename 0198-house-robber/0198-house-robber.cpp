class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()==1)
        {
            return nums[0];
        }
        int maxi = INT_MIN;
        int prev1 = 0;
        int prev2 = 0;
        for(int i = 0 ; i <nums.size(); i++)
        {
            maxi = max(prev2+nums[i],prev1);
            prev2 = prev1;
            prev1 = maxi;
        }
        return maxi;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna