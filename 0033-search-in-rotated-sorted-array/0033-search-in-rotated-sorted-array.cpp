class Solution {
public:
//here checking is not done via individual element ie nums[mid]> or<target , because we dont even know which part of the array is sorrted. binary search can only be applioed if array is sorted. so intead first checked which part is sorted and where target is actually, and then continued.
    int search(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size()-1;
        while(start<=end)
        {
            int mid = start+(end-start)/2;
            if(nums[mid]==target)
            {
                return mid;
            }//firt find order bcz binary search can onlyu occur in sorted env.
            if (nums[start]<=nums[mid])
            {// once seen only the first half is sorted then check wether target lies there or not.
                if(target>=nums[start] && target<=nums[mid])
                {
                    end=mid-1;
                }
                else// means target is not in the sorted first part
                {
                    start= mid+1;
                }
            }
            else if (nums[mid]<= nums[end])
            {
                if(target>=nums[mid] && target<= nums[end])
                {
                    start= mid+1;
                }
                else
                {
                    end= mid-1;
                }
            }
        }
        return -1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna