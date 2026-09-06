class Solution {
public:
    void solve(string &s, int &op, int idx, bool neg)
    {
        if(idx==0 && (s[idx]=='-'||s[idx]=='+' ))
        {
            solve(s,op,idx+1,neg);
        }
        if(s[idx]<'0'|| s[idx]>'9'|| idx==s.size())
        {
            return;
        }
        if(neg== false && op > (INT_MAX - (s[idx] - '0')) / 10) {
            op = INT_MAX;
            return;
        }
        else if(neg== true && op > (INT_MAX - (s[idx] - '0')) / 10) {
            op = INT_MIN;
            return;
        }
        op =op*10+ (s[idx]-'0');
        solve(s, op, idx+1,neg);
    }
    int myAtoi(string s) {
        int i =0;
        int op= 0;
        while(i<s.size() && s[i]==' ')
        {
            s.erase(i,1);
        }
        if(i==s.size()) return 0;
        bool neg = false;
        if(s[i] =='-')
        {
            neg = true;
        }
        solve(s, op, 0, neg);
        if(op==INT_MIN)
        {
            return op;
        }
        if(s[i]=='-')
        {
            op = -op;
        }
        return op;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna