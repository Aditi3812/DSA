class Solution {
public:
    void solve(vector<int>& nums,int start, vector<vector<int>>&ans)
    {
        if (start == nums.size()-1)
        {
            ans.push_back(nums);
            return;
        }
        unordered_set<int>mp;
        for(int i = start; i <nums.size(); i++)
        {
            if(mp.find(nums[i])== mp.end())
            {
                mp.insert(nums[i]);
                swap(nums[start], nums[i]);
                solve(nums, start+1, ans);
                //backtrack
                swap(nums[start], nums[i]);
            }
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        solve(nums, 0, ans);
        return ans;
    }
};
// //  we will be solving this vi backtracking:)
// abc ->cases a swapped witha,  b and c so for a ->a , b , c
// then for b -> b and c since first element is aready locked.
// 112 -> 1 swapped with 1 , 1 and 2 
// both would be same, so only 1 selectd

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna