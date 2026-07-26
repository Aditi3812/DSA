/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
int maxi = INT_MIN; 
    int maxPathSumimi(TreeNode* root)
    {
        if(root==nullptr)return 0;
        
        int l =max(0,maxPathSumimi(root->left)) ;
        int r  =max(0,maxPathSumimi(root->right)) ;

        maxi = max(maxi, l+r+root->val);
        return root->val+max(l,r);
    }
    int maxPathSum(TreeNode* root) {
        maxPathSumimi(root);
        return maxi;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna