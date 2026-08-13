class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>>minh;
        for(int i = 0 ; i <nums.size(); i++)
        {
            minh.push(nums[i]);
            if(minh.size()>k)
            {
                minh.pop();
            }
        }
        return minh.top();
    }
};
// 3 32 32 53 65 65 --> ans is 5

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna