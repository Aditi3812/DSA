class Solution {
public:
    bool solve(vector<int>&nums, vector<int>&sum, int &target, int idx)
    {
        if(idx==nums.size())
        {
            for(int i = 0 ; i <sum.size()-1; i++)
            {  
               if (sum[i] != sum[i + 1]) {
                    return false; 
                }
            }
            return true;
        }
        for(int j = 0 ; j <sum.size(); j++)
        {
            sum[j]+=nums[idx];
            if(sum[j]<=target)
            {
                if(solve(nums, sum, target, idx + 1)){
                    return true;
                }
            }
            sum[j]-=nums[idx];
            if(sum[j] == 0) {
                break;
            }
        }
        return false;
    }
    bool canPartitionKSubsets(vector<int>& nums, int k) {
        int sum=0;
        for(int i = 0 ; i <nums.size(); i++)
        {
            sum+=nums[i];
        }
        if(sum % k != 0)
        {
            return false;
        }
        vector<int>bc(k, 0);
        bool ans=false;
        sort(nums.rbegin(), nums.rend());
        if (nums[0] >sum/k) return false;
        int t= sum/k;
        return solve(nums,bc,t,0);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna