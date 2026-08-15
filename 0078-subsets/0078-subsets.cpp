class Solution {
public:
     void solve(vector<int> ip, vector<int> op,vector<vector<int>>&fin)
    {
        if(ip.size() == 0) 
        {
            fin.push_back(op);
            return;
        }
        vector<int> op1 = op;
        vector<int> op2 = op;

        op2.push_back(ip[0]);
        ip.erase(ip.begin()+0);
        solve(ip,op1,fin);
        solve(ip,op2,fin);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>op;
        vector<vector<int>>fin;
        solve(nums,op, fin);
        return fin;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna