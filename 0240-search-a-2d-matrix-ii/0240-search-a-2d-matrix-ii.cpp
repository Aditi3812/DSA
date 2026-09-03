class Solution {
public:
    bool searchMatrix(vector<vector<int>>& nums, int target) {
        int i = 0;
        int j = nums[0].size()-1;
        while(i<nums.size() && j>=0)
        {
            if(nums[i][j]==target)
            {
                return true;
            }
            else if( nums[i][j]>target)
            {
                j = j-1;
            }
            else if ( nums[i][j]<target)
            {
                i = i +1;
            }
        }
        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna