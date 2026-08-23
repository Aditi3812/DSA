class Solution {
public:
    void solve(int idx, vector<int>&nums,vector<int>&op, int target, vector<vector<int>>&fin, int &sum)
    {
        if(idx == nums.size())
        {
            return;
        }
        if(sum==target)
        {
            fin.push_back(op);
            return;
        }
        if (sum>target)
        {
            return;
        }
        else if(sum<target)
        {
            solve(idx+1,nums,op, target, fin,sum);
            op.push_back(nums[idx]);
            sum+= nums[idx];
            solve(idx, nums, op, target,fin, sum);
            op.pop_back();
            sum-= nums[idx];
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
      vector<int>op;
      vector<vector<int>>fin;
      int sum =0;
      solve(0,candidates,op, target, fin, sum);
      return fin;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna