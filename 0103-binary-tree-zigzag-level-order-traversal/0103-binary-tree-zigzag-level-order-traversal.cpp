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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(!root)
        {
            return {};
        }
        queue<TreeNode*>q;
        q.push(root);
        vector<vector<int>> fin;
        int c = 0;
        while(!q.empty())
        {
            int s = q.size();
            vector<int>ans;
            for(int i = 0; i <s; i++)
            {
                if(q.front()->left)q.push(q.front()->left);
                if(q.front()->right)q.push(q.front()->right);
                ans.push_back(q.front()->val);
                q.pop();
            }
            if(c%2 !=0) reverse(ans.begin(), ans.end());
            fin.push_back(ans);
            c++;
        }
        return fin;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna