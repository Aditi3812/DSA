/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        ListNode * curr= head;
        vector<int>nums;
        int n=0;
        while(curr != nullptr)
        { 
            nums.push_back(curr->val);
            curr= curr->next;
        }
        n = nums.size();
        vector<int>ans(n,0);
        stack<int>st;
        for(int i = n -1; i>=0; i--)
        {
            while(!st.empty() && st.top()<=nums[i])
            {
                st.pop();
            }
            if(!st.empty() && st.top()>nums[i])
            {
                ans[i] = st.top();
            }
            st.push(nums[i]);
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna