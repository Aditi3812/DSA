class Solution {
public:
    bool solve(vector<int>&nums, int tar, int idx, vector<int>&side)
    {
        if(idx == nums.size())
        {
            return side[0]==side[1]&&side[1]==side[2]&&side[2]==side[3]&& side[3]==tar;
        }
        for(int i =0; i <side.size(); i++)
        {
            side[i]+=nums[idx];
            if( side[i] >tar)
            {
                side[i]-=nums[idx];
                continue;
            }
            if(solve(nums,tar, idx+1, side)){
                return true;
            } 
            side[i]-=nums[idx]; 
        }
        return false;
    }
    bool makesquare(vector<int>& mat) {
        if (mat.size()<4) return false;
        int sum = 0;
        for(int i = 0; i <mat.size(); i++)
        {
            sum+=mat[i];
        }
        if(sum%4!=0)
        {
            return false;
        }
        sort(mat.rbegin(), mat.rend());
        vector<int>side(4,0);
        return solve(mat, sum/4, 0, side);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna