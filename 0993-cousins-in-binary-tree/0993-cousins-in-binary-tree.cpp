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
    bool isCousins(TreeNode* root, int x, int y) {
        queue<TreeNode*>q;
        if(x== root->val || y == root->val || !root)
        {
            return false;
        }
        q.push(root);
        
        while(!q.empty())
        {
            int ds= q.size();
            bool xf = false;
            bool yf= false;
            TreeNode*xpar= nullptr;
            TreeNode*ypar = nullptr;
            for(int i = 0; i <ds; i++)
            {
                TreeNode* temp =  q.front();
                if(temp->left)
                {
                    if(temp->left->val == x)
                    {
                        xpar = temp;
                        xf=true;
                    }
                    if(temp->left->val == y)
                    {
                        ypar = temp;
                        yf=true;
                    }
                    q.push(temp ->left);
                }
                if(temp->right)
                {
                    if(temp->right->val == x)
                    {
                        xpar = temp;
                        xf = true;
                    }
                    if(temp->right->val == y)
                    {
                        ypar = temp;
                        yf= true;
                    }
                    q.push(temp->right);
                }
                q.pop();
            }
            if(xf&& yf && xpar!=ypar)
            {
                return true;
            }
            else if(xf||yf)
            {
                return false;
            }
            
        }
        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna