class Solution {
public:
    double myPow(double x, int n) {
        long long N;
        N = n;
        if(n==0) return 1;
        if(n<0)
        {
            N = -N;
            x = 1/x;
        }
        double ans = myPow(x,N/2);
        if(N%2 != 0)
        {
            return ans*ans*x;
        }
        return ans*ans;   
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna