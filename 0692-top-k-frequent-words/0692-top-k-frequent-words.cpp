class Solution {
public:
    struct Compare {
        bool operator()(const pair<int, string>& a, const pair<int, string>& b) const {
            if (a.first == b.first) {
                // Lexicographically larger word stays on top to be evicted first
                return a.second < b.second; //if returned true....a deeeper in the queue ie base else top.
            }
            // Lower frequency stays on top to be evicted first
            return a.first > b.first; 
        }
    };
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int>mpp;
        for(int i = 0 ; i <words.size(); i++)
        {
            mpp[words[i]]++;
        }
        priority_queue<pair<int,string>, vector<pair<int,string>>, Compare>minh;
        for(const auto &[key,val]:mpp)
        {
            minh.push({val,key});
            if(minh.size()>k)
            {
                minh.pop();
            }
        }
        vector<string>ans;
        while(!minh.empty())
        {
            ans.push_back(minh.top().second);
            minh.pop();
        }
        // Reverse to get highest frequency and correct alphabetical order first
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna