class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
        for(int i = 0 ; i <nums.size(); i++)
        {
            mpp[nums[i]]++;
        }
        vector<pair<int,int>>ans;
        for(auto& it:mpp)
        {
            ans.push_back({it.second, it.first});
        }
        sort(ans.begin(), ans.end());
        reverse(ans.begin(), ans.end());
        vector<int>fin;
        for(int i = 0 ; i<k ; i++)
        {
            fin.push_back(ans[i].second);
        }
        return fin;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna