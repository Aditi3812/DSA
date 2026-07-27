class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = prices[0];
        int prof = 0;
        for(int i = 1 ; i <prices.size(); i++)
        {
            if(buy>prices[i]){
                buy = prices[i];
            }
            else{
                prof = max(prof, prices[i]-buy);
            }
        }
        return prof;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna