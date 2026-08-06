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
    vector<double> averageOfLevels(TreeNode* root) {
        queue<TreeNode*> q;
        int lvl = 0;
        q.push(root);
        if(!root)
        {
            return {};
        }
        vector<double>ans;
        while(!q.empty())
        {
            int lvl = q.size();
            double sum = 0;
            for(int i = 0 ; i <lvl; i++)
            {
                TreeNode* temp = q.front();
                sum+= temp->val;
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
                q.pop();
            }
            double avg = sum/lvl;
            ans.push_back(avg);
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna