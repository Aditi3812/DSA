class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& s) {
        unordered_map<string,vector<string>>mpp;
       for(int i = 0; i <s.size(); i++)
       {
        string k = s[i];//unique key which will hold a vector of strings sharing the key, eg aet-> [eat, tea,ate]
        sort(k.begin(), k.end());
        mpp[k].push_back(s[i]);//Group original string under its sorted key
       }
      
       vector<vector<string>>ans;
       for(auto& it: mpp)
       {
        ans.push_back(it.second);
       }
       return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna