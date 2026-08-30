class Solution {
public:
    void solve(vector<vector<string>>&ans,vector<string>res,int col, unordered_set<int>row, unordered_set<int>pdg,unordered_set<int>ndg,int &n)
    {
        if(col==n)
        {
            ans.push_back(res);
            return;
        }
        for(int i = 0; i <n; i++)
        {
            if(row.find(i)!=row.end()|| pdg.find(i+col)!=pdg.end() || ndg.find(i-col)!=ndg.end())
            {
                continue;
            }
            row.insert(i);
            pdg.insert(i+col);
            ndg.insert(i-col);
            res[i][col]='Q';

            solve(ans,res,col+1,row,pdg,ndg,n);

            row.erase(i);
            pdg.erase(i+col);
            ndg.erase(i-col);
            res[i][col]='.';
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        if(n==1) return {{"Q"}};
        if(n<4 && n != 1) return {};
        vector<vector<string>>ans;
        unordered_set<int>r;
        unordered_set<int>pdg;//r+c
        unordered_set<int>ndg;//r-c
        vector<string>res(n,string(n,'.'));
        solve(ans,res,0,r,pdg,ndg,n);
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna