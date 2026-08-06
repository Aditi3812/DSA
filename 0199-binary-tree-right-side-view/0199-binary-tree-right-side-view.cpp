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
    vector<int> rightSideView(TreeNode* root) {
        if(!root)
        {
            return {};
        }
        queue<TreeNode*>q;
        q.push(root);
        int lvl = 0;
        vector<int>ans;
        ans.push_back(q.back()->val); 
        while(!q.empty())
        {
            lvl = q.size();
            for(int i = 1 ; i <=lvl; i++)
            {
                TreeNode* temp = q.front();
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
                q.pop();
            }
            ans.push_back(q.back()->val);
        }
        ans.pop_back();
        return ans;
    }
};
// 1
// 3n

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna