class Solution {
public:
    bool divisorGame(int n) {
      if(n%2 == 0 ) return true;
      else {
        return false;
      }
    }
};
// 1. 1 -> b
// 2. 2 -> 1a -> a
// 3. 3 ->1a -> 2 -> 1b -> 1 b
// 4. 4 ->1a -> !3 ->a 
// 4 ->2a->!2 ->b
// // each one wants to keep their even vals;
// // each one wants the other to choose odd vals
// 6 ->1 a
// 5 ->1b
// 4 -> 1a
// 3 ->1b
// 2 ->1a
// 1 ->b ---> a wins 

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna