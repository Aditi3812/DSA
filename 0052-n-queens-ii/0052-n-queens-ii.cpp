class Solution {
public:
    void solve(int &c,vector<string>&vec,int &n, int col,unordered_set<int>row, unordered_set<int>&dpos, unordered_set<int>&dneg )
    {
        if(col==n)
        {
            c++;
            return;
        }
        for(int i =0 ; i<n; i++)
        {
            if(dpos.find(i+col)==dpos.end() && dneg.find(i-col)==dneg.end()&& row.find(i)==row.end())
            {
                vec[i][col]='Q';
                dpos.insert(i+col);
                dneg.insert(i-col);
                row.insert(i);
                solve(c, vec, n , col+1, row,dpos, dneg);
                vec[i][col]='.';
                dpos.erase(i+col);
                dneg.erase(i-col);
                row.erase(i);
            }
            else
            {
                continue;
            }
        }
    }
    int totalNQueens(int n) {
        if(n==1)return 1;
        if(n<3)return 0;
        vector<string>vec(n,string(n,'.'));
        unordered_set<int>dpos;
        unordered_set<int>dneg;
        unordered_set<int>row;
        int c=0;
        solve(c,vec,n,0,row,dpos,dneg);
        return c;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna