class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pair<int,int>>maxh;
        for(int i = 0 ; i <arr.size(); i++)
        {
            maxh.push({abs(arr[i]-x), arr[i]});
            if(maxh.size()>k)
            {
                maxh.pop();
            }
        }
        vector<int>vec;
        while(!maxh.empty())
        {
            vec.push_back(maxh.top().second);
            maxh.pop();
        }
        sort(vec.begin(), vec.end());
        return vec;
    }
};
// 1 2 3 4 5  closest to 3 and size = 4;
// 2 1 0 1 2

// max heap 

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna