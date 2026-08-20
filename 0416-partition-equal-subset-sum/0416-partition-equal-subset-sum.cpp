class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        for(int i = 0 ; i <nums.size(); i++)
        {
            sum+=nums[i];
        }
        vector<vector<bool>>t(nums.size()+1, vector<bool>(sum/2+1,false));
        if(sum%2 ==0)
        {
            for(int i = 0 ; i <nums.size()+1; i++)
            {
                for(int j = 0; j <sum/2+1; j++)
                {
                    if (j == 0)
                    {
                        t[i][j] = true;
                        continue;
                    }
                    if(i==0)
                    {
                        t[i][j] =false;
                        continue;
                    }
                    if(nums[i-1]>j)
                    {
                        t[i][j] = t[i-1][j];
                    }
                    else if (nums[i-1]<=j)
                    {
                        t[i][j] = t[i-1][j- nums[i-1]]||t[i-1][j];
                    }
                }
            }
        }
        else
        {
            return false;
        }
        return t[nums.size()][sum/2];
    }
};

//  we will improve via memoization and top down approach


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna