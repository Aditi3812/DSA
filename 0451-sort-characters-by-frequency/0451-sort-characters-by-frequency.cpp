class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int>mpp;
        for(int i = 0 ; i <s.size(); i++)
        {
            mpp[s[i]]++;
        }
        vector<pair<int,char>>vec;
        for(auto &it :mpp)
        {
            vec.push_back({it.second, it.first});
        }
        sort(vec.begin(), vec.end());
        reverse(vec.begin(), vec.end());
        string fin = "";
        for(auto& [count, ch] : vec)
        {
            fin.append(count, ch);
        }
        return fin;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna