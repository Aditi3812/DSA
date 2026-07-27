class Solution {
public:
    int hammingWeight(int n) {
        int c = 0;
      while(n!=0) 
      {
        int b = n&1;
        if(b==1)
        {
            c++;
        }
        n = n>>1;
      }
      return c; 
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna