class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())
        {
            return false;
        }
        vector<int>c1(26,0);
        vector<int>c2(26,0);
        for(int i = 0; i <s.size(); i++)
        {
            c1[s[i]-'a']++;
        }
        for(int i = 0; i <s.size(); i++)
        {
            c2[t[i]-'a']++;
        }
        if(c1==c2)
        {
            return true;
        }
        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna