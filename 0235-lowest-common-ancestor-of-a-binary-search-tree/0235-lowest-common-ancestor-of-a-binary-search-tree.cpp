/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root== nullptr)
        {
            return nullptr;
        }
        TreeNode* l = nullptr;
        TreeNode* r = nullptr;
        if (root == p || root == q)
        {
            return root;
        }
        if(root->val>p->val && root->val>q->val)
        {
            l = lowestCommonAncestor(root->left, p , q);
        }
        else if(root->val<p->val && root->val<q->val)
        {
            r = lowestCommonAncestor(root->right, p , q);
        }
        else 
        {
            l = lowestCommonAncestor(root->left, p, q);
            r = lowestCommonAncestor(root->right, p, q);
        }
        if(l==nullptr)
        {
            return r;
        }
        else if(r== nullptr)
        {
            return l;
        }
        else
        {
            return root;
        }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna