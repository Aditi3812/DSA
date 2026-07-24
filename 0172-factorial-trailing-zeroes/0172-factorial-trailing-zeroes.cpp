class Solution {
public:
    int trailingZeroes(int n) {
        if(n<5)
        {
            return 0;
        }
        return n/5 + trailingZeroes(n/5);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna