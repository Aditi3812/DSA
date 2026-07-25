class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int>mpp;
        for(int i = 0; i <nums.size(); i++)
        {
            if(mpp[nums[i]]==1)
            {
                return true;
            }
            else
            {
                mpp[nums[i]]++;
            }
        }
        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna