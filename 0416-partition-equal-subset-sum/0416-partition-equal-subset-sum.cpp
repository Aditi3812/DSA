class Solution {
public:
    bool part(vector<int>&nums, int target, int n, vector<vector<int>>&t)
    {
        if(target == 0)
        {
            return true;
        }
        if (n == 0) return false;
        if(t[n][target]!= -1)
        {
            return t[n][target];
        }
        if(nums[n-1]>target)
        {
            return t[n][target]=part(nums, target, n-1, t);
        }
        else 
        {
            return t[n][target]= (part(nums, target-nums[n-1], n-1,t)|| part(nums, target, n-1,t));
        }
    }
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        for(int i = 0 ; i <nums.size(); i++)
        {
            sum+=nums[i];
        }
        if(sum%2 ==0)
        {
            vector<vector<int>>t(nums.size()+1, vector<int>(sum/2+1,-1));
            return part(nums,sum/2, nums.size(),t);
        }
        else
        {
            return false;
        }
    }
};

//  we will improve via memoization and top down approach


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna