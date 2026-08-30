class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        if(n==1)return true;
        bool ans = false;
        int g = n-1;
        int i = g-1;
        while(i>=0)
        {
            if(nums[i]>=g-i)
            {
                g = i;
                i--;
                ans = true;
            }
            else
            {
                ans= false;
                i--;
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna