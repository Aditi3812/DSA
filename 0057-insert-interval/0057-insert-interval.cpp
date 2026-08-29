class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& in, vector<int>& nin) {
        vector<vector<int>>ans;
        int n = in.size();
        int i = 0;
        while(i<n && nin[0]>in[i][1])
        {
            //while nin's start in itself is greater than interval's end
            ans.push_back(in[i]);
            i++;
        }
        while(i<n && nin[1]>=in[i][0])
        {
            nin[0] = min(nin[0], in[i][0]);
            nin[1] = max(nin[1], in[i][1]);
            i++;
        }
        ans.push_back(nin);
        while(i<n)
        {
            ans.push_back(in[i]);
            i++;
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna