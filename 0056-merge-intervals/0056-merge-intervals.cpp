class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& in) {
      if(in.size()==0) return{};
      sort(in.begin(), in.end());
      vector<vector<int>>ans;
      ans.push_back(in[0]);
      for(int i = 1; i <in.size(); i++)
      {
        if(in[i][0]<=ans.back()[1])
        {
            ans.back()[1]= max(ans.back()[1], in[i][1]);
        }
        else
        {
            ans.push_back(in[i]);
        }
      }
      return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna