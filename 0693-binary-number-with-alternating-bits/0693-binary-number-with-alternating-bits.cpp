class Solution {
public:
    bool hasAlternatingBits(int n) {
        if(n==0)return 0;
        int a = n&1;
        n= n>>1;
        int b ;
        while(n!=0)
        {
            b = n&1;
            if(a!= b)
            {
               a=b;
               n= n>>1;
               continue; 
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna