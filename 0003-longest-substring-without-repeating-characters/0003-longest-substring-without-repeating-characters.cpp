class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0;
        int r = 0;
        unordered_map<char,int>mpp;
        int maxc = INT_MIN;
        if(s.size()==0)
        {
            return 0;
        }
        while(r<s.size() )
        {
            if(mpp[s[r]]<=0)
            {
                mpp[s[r]]++;
                 maxc = max(maxc, r-l+1);
                 r++;
            }
            else
            {
                while(mpp[s[r]]>0)
                {
                    mpp[s[l]]--;
                    l++;
                }
            }
            
        }
        return maxc;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna