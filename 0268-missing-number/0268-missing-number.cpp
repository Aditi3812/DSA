class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int zor=0;
        for(int i = 0 ; i <= n ; i++)
        {
            zor^= i;
        }
        for(int i = 0 ; i<n ; i++)
        {
            zor^=nums[i];
        }
        return zor;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna