class Solution {
public:
    void solve(vector<int>&ip, int idx, int op, int tar, int &c)
    {
        if(idx==ip.size())
        {
            if(op == tar)
            {
                c++;
            }
            return;
        }
        int op1 = op+ip[idx];
        int op2 = op-ip[idx];
        solve(ip,idx+1, op1, tar, c);
        solve(ip,idx+1, op2, tar, c);
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int op =0;
        int c = 0;
        solve(nums,0, op, target, c);
        return c;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna