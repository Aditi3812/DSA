class Solution {
public:
     void solve(int idx, vector<int>& nums, vector<int>&op,vector<vector<int>>&fin)
    {
        if(idx == nums.size()) 
        {
            fin.push_back(op);
            return;
        }
        solve(idx+1, nums, op, fin);
        op.push_back(nums[idx]);
        solve(idx+1, nums, op, fin);
        op.pop_back();
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>op;
        vector<vector<int>>fin;
        solve(0,nums,op, fin);
        return fin;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna