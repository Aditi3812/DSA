class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& in) {
        vector<vector<int>>ans;
        int i = 1; 
        int n= in.size();
        sort(in.begin(),in.end());
        if(n<=1)return in;
        vector<int>nin=in[0];
        while(i<n)
        {
            while(i<n && nin[1]<in[i][0])
            {
                ans.push_back(nin);
                nin=in[i];
                i++;
                continue;
            }
            while(i<n && in[i][0]<=nin[1])
            {
                nin[0] = min(nin[0],in[i][0]);
                nin[1] = max(nin[1],in[i][1]);
                i++;
            }
            ans.push_back(nin);
            if(i<n)
            {
                nin = in[i];
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna