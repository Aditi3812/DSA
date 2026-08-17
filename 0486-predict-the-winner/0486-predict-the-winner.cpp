class Solution {
public:
    bool solve(vector<int>&nums,int a,int s,int head,int tail)
    {
        int s1=0;
        int s2=0;
        if(head>tail)
        {
            return (a>=0);
        }
        if(s%2==0)
        {
            s1=a+nums[head];
            bool abc= solve(nums,s1,s+1,head+1,tail);
            
            s2=a+nums[tail];
            bool def= solve(nums,s2,s+1,head,tail-1);
            return abc||def;
        }
        else
        {
            s1=a-nums[head];
            bool abc =solve(nums,s1,s+1,head+1,tail);
            
            s2=a-nums[tail];
            bool def=solve(nums,s2,s+1,head, tail-1);

            return abc&&def;
        }
        
    }
    bool predictTheWinner(vector<int>& nums) {
        int a=0;int s=0;
        int head = 0;
        int tail= nums.size()-1;
        return solve(nums,a,s,head,tail);
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna