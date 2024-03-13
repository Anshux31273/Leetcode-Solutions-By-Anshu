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
private:
    void psh(TreeNode* root, stack<TreeNode*>& stk)
    {
        if(root != NULL)
        {
            psh(root->right, stk);
            psh(root->left, stk);
            root->left = NULL;
            root->right = NULL;
            stk.push(root);
        }
    }
public:
    void flatten(TreeNode* root) {
        stack<TreeNode*> stk;
        psh(root, stk);
        TreeNode* pot = root;
        root = NULL;
        while(!stk.empty())
        {
            if(root == NULL)
            {
                root = stk.top();
                pot = root;
            }
            else
            {
                pot->right = stk.top();
                pot = pot->right;
            }
            stk.pop();

        }
    }
};
