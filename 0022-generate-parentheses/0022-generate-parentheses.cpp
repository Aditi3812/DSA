class Solution {
public:
vector<string>ans;
    void solve(vector<string>&ans,string &op, int o, int c)
    {
        string op1="";
        string op2="";
        if(o==0 && c==0)
        {
            ans.push_back(op);
            return;
        }
        if(o!=0)
        {
            op1=op+'(';
            solve(ans,op1,o-1,c);
        }
        if(c>o)
        {
            op2 = op+')';
            solve(ans,op2,o,c-1);
        }
        
    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        int o = n;
        int c = n;
        string s;
        solve(ans,s,o,c);
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna