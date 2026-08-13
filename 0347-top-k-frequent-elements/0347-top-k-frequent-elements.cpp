class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int>mpp;
        for(int i = 0 ; i <nums.size(); i++)
        {
            mpp[nums[i]]++;
        }
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int, int>>>minh;
        for(auto it:mpp)
        {
            minh.push({it.second, it.first});
            if(minh.size()>k)
            {
                minh.pop();
            }
        }
        vector<int>ans;
        for(int i = 0; i <k ; i++)
        {
            ans.push_back(minh.top().second);
            minh.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
// 1 1 1 2 2 3  -->
// 2 2 -->minh
// 3 1


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna