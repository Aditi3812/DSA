class Solution {
public:
    double myPow(double x, int n) {
        long long N = n;
        if(x==1)
        {
            return 1;
        }
        else if(x==0)
        {
            return 0;
        }
        if(N<0)
        {
            N = -N;
            x = 1/x;
        }
        if (N==0)
        {
            return 1;
        }
        double hlf = myPow(x, N/2);
        if(N%2==0)
        {
            return hlf *hlf;
        }
        return x * hlf *hlf;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna