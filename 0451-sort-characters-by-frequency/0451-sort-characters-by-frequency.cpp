class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int>mpp;
        for(int i = 0 ; i <s.size(); i++)
        {
            mpp[s[i]]++;
        }
        priority_queue<pair<int,char>, vector<pair<int, char>>,greater<pair<int, char>>>minh;
        for(int i = 0 ; i <s.size(); i++)
        {
            minh.push({mpp[s[i]], s[i]});
        }
        string ans ="";
       while(!minh.empty())
        {
            ans+=minh.top().second;
            minh.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna