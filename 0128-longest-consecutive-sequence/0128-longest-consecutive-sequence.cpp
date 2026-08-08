class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
      if(nums.size() == 0)
      {
        return 0;
      }
      if(nums.size() == 1)
      {
        return 1;
      }
      sort(nums.begin(), nums.end());
      int c= 1;
      int maxc = INT_MIN;
      for(int i = 1; i <nums.size(); i++)
      {
        if( nums[i]==nums[i-1])
        {
            maxc = max(maxc, c);
            continue;
        }
        if( nums[i]-1 == nums[i-1])
        {
            c++;
        }
        if( nums[i]-1 != nums[i-1])
        {
            c = 1;  
        }
        maxc = max(maxc, c);
      }
      return maxc;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna