class Solution {
public:
    bool searchMatrix(vector<vector<int>>& nums, int target) {
        int m = nums.size(); 
        int n = nums[0].size();
        int s = 0;
        int e = (n*m)-1;
        while(s<=e)
        {
            int mid = (s+e)/2;
            int midr = mid/n;
            int midc = mid%n;
            if(nums[midr][midc]==target)
            {
                return true;
            }
            else if(nums[midr][midc]>target)
            {
                e= mid-1;
            }
            else
            {
                s=mid+1;
            }

        }
        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna