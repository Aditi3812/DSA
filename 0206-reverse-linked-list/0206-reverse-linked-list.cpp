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
    void revl(ListNode* curr,ListNode* temp, ListNode* dum)
    {
        if(curr == nullptr)
        {
            dum->next = temp;
            return;
        }
        ListNode* a = curr->next;
        curr->next = temp;
        revl(a, curr, dum);
    }
    ListNode* reverseList(ListNode* head) {
        ListNode* dum = new ListNode(0);
        ListNode* temp = nullptr;
        ListNode* curr = head;
        revl( curr, temp, dum);
        return dum->next;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna