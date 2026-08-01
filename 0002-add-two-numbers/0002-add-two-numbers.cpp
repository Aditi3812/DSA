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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int mask = 0;
        ListNode* dum = new ListNode(0);
        ListNode* curr = dum;
        int sum = 0;
        while(l1 && l2)
        {
            sum = (l1->val+ l2->val+mask);
            if(l1->val+ l2->val + mask >9)
            {
                sum = sum%10;
                mask = 1;
            }
            else
            {
                mask = 0;
            }
            curr->next = new ListNode(sum);
            l1=l1->next;
            l2 = l2->next;
            curr = curr->next;
        }
        while(l1)
        {
            if(l1->val+mask >=10)
            {
                sum = (l1->val+mask)%10;
                mask = 1;
            }
            else
            {
                sum = l1->val+mask;
                mask = 0;
            }
            curr->next = new ListNode(sum);
            l1=l1->next;
            curr = curr->next;
        }
        while(l2)
        {
            if(l2->val+mask >=10)
            {
                sum = (l2->val+mask)%10;
                mask = 1;
            }
            else
            {
                sum = l2->val+mask;
                mask = 0;
            }
            curr->next = new ListNode(sum);
            l2=l2->next;
            curr = curr->next;
        }
        if(mask ==1 ) curr->next = new ListNode(mask);
        ListNode* result = dum->next;
        return result;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna