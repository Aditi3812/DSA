class Solution {
public:
    int fib(int n) {
        if(n==0)
        {
            return 0;
        }
        else if (n==1)
        {
            return 1;
        }
        int sum1= fib(n-1);
        int sum2 = sum1+ fib(n-2);
        return sum2;

}
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna