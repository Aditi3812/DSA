class Solution {
public:
    void solve(int idx, vector<int>& nums, vector<int>&op, vector<vector<int>>&fin, set<vector<int>>&set1)
    {
        if(idx==nums.size())
        {
            if(set1.find(op) == set1.end())
            {
                set1.insert(op);
                fin.push_back(op);
            }
            return;
        }
        solve(idx+1, nums, op, fin, set1);
        op.push_back(nums[idx]);
        solve(idx+1, nums, op, fin, set1);
        op.pop_back();
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
       vector<int>op;
       vector<vector<int>>fin;
       set<vector<int>>set1;
       sort(nums.begin(), nums.end());
       solve(0,nums, op, fin, set1);
       return fin;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna