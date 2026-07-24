class Solution {
public:
    int climbStairs(int n) {
        //Because you can only take 1 or 2 steps at a time, you could have only reached step $n$ from:Step n - 1 (by taking a single step of size 1)Step n - 2(by taking a single step of size 2)

        //our goal is just to reach the top.
        if(n<=2) return n;
        int prev1 = 2;
        int prev2 = 1;
        int curr = 0;
        for(int i = 3; i <=n; i++)
        {
            curr = prev1+prev2;
            prev2 = prev1;
            prev1 = curr;
        }
        return curr;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna