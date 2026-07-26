class Solution {
public:
    int maxProduct(int n) {
        vector<int>ans;
        while(n!=0)
        {
            ans.push_back(n%10);
            n= n/10;
        }
        sort(ans.begin(), ans.end());
        return ans[ans.size()-1]*ans[ans.size()-2];
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna