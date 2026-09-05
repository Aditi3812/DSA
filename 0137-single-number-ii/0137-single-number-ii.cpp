class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int s = 0;
        int res = 0;
        for(int i = 0 ; i<32; i++)
        {
            for(int j = 0 ; j<nums.size(); j++)
            {
                s=(s+((nums[j]>>(31-i))&1))%3;
            }
            res = res|(s<<(31-i));
            s=0;
        }
        return res;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna