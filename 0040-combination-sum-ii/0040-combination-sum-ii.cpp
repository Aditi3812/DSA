class Solution {
public:
vector<vector<int>>fin;
    void solve(vector<int>&nums, vector<int>ans,int target, int n)
    {
        if(target==0)
        {
            fin.push_back(ans);
            return;
        }
        if(n==0|| target < 0) {
            return;
        }
        if(nums[n-1]>target)
        {
            solve(nums,ans,target,n-1);
        }
        else
        {
            ans.push_back(nums[n-1]);
            solve(nums,ans,target-nums[n-1],n-1) ;
            ans.pop_back();
            int k = n - 1;
            while (k > 0 && nums[k - 1] == nums[n - 1]) {
                k--;
            }
            solve(nums, ans, target, k);
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        fin.clear();
        int z = target;
        sort(candidates.begin(), candidates.end());
        vector<int>ans;
        solve(candidates,ans,target, candidates.size());
        sort(fin.begin(), fin.end());
        fin.erase(unique(fin.begin(), fin.end()), fin.end());
        return fin;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna