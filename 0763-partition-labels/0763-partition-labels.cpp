class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<char, vector<int>>mpp;
        vector<vector<int>>nums;
        for(int i = 0 ; i <s.size(); i++)
        {
            if(mpp[s[i]].empty())
            {
                mpp[s[i]]={i,i};
            }
            else
            {
                mpp[s[i]][1] = max(mpp[s[i]][1], i);
            }
        }
        for (auto& pair : mpp)
        {
            nums.push_back(pair.second);
        }
        int i = 1;
        vector<vector<int>>ans;
        sort(nums.begin(), nums.end());
        vector<int>nin = nums[0];
        while(i<nums.size())
        {
            while(i < nums.size() &&nin[1]<nums[i][0])
            {
                ans.push_back(nin);
                nin= nums[i];
                i++;
            }
            while(i < nums.size() &&nums[i][0]<=nin[1])
            {
                nin[0] = min(nin[0], nums[i][0]);
                nin[1] = max(nin[1], nums[i][1]);
                i++;
            }
            if (i < nums.size()) {
                ans.push_back(nin);
                nin = nums[i];
            }
        }
        ans.push_back(nin);
        vector<int>fin;
        for(int j = 0 ; j <ans.size(); j++)
        {
            fin.push_back(ans[j][1]-ans[j][0] +1);
        }
        return fin;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna