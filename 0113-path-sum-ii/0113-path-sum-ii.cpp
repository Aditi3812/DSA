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
    vector<int> in;
    vector<vector<int>>ans;
    void dfs(TreeNode* root, int targetSum)
    {
        if(!root)
        {
            return ;
        }
        in.push_back(root->val);
        if(!root->left && !root->right)
        {
            if(targetSum==root->val)
            {
                ans.push_back(in);
            }
        }
        else
        {
            dfs(root->left, targetSum - root->val);
            dfs(root->right,targetSum - root->val);
        }
        // Always backtrack after exploring children
        in.pop_back();
       
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        dfs(root,targetSum);
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna