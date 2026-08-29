class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string>n;
        for(int i = 0 ; i <nums.size(); i++)
        {
            n.push_back(to_string(nums[i]));
        }
        sort(n.rbegin(), n.rend(),[](string &a, string &b)
        {
            return a+b<b+a;
        });
        int i = 0;
        while(i <n.size() && n[i]=="0")
        {
            i++;
        }
        if(i==n.size())
        {
            return "0";
        }
        string ans="";
        for(; i <n.size(); i++)
        {
            ans+=n[i];
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna