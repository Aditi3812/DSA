class Solution {
public:
    void solve(vector<int>& ip, int idx, vector<int> &op, vector<vector<int>>&fin)
    {
        if(idx== ip.size()) 
        {
            fin.push_back(op);
            return;
        }
        solve(ip, idx+1, op,fin);
        op.push_back(ip[idx]);
        solve(ip, idx+1, op,fin);

        op.pop_back();
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>fin;
        vector<int>op;
        solve(nums,0,op,fin);
        return fin;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna