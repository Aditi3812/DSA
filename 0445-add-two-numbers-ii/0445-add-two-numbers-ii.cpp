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
        stack<int>s1;
        stack<int>s2;

        while(l1 != nullptr)
        {
            s1.push(l1->val);
            l1 = l1 ->next;
        }
         while(l2 != nullptr)
        {
            s2.push(l2->val);
            l2 = l2 ->next;
        }
        ListNode* head = nullptr;
        int c=0;
        int sum=0;
        while(!s1.empty() || !s2.empty()|| c>0)
        {
            if(!s1.empty())
            {
                sum += s1.top();
                s1.pop();
            }
            if(!s2.empty())
            {
                sum += s2.top();
                s2.pop();
            }
            if(c>0)
            {
                sum+=c;
            }
            if(sum>=10)
            {
                c= sum/10;
                sum = sum%10;
            }
            else
            {
                c=0;
            }
            ListNode* newn = new ListNode(sum);
            newn->next = head;
            head = newn;
            sum= 0;
        }
        return head;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna