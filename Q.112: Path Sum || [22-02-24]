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
    void sum(TreeNode* root, int t, int prev, int& ans)
    {
        if(root == NULL || ans == 1)
        {
            return;
        } 
        root->val += prev;
        if(root->left == NULL && root->right == NULL && root->val == t)
        {
            ans = 1;
            return;
        }
        sum(root->left, t, root->val, ans);
        sum(root->right, t, root->val, ans);
    }
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        int ans = 0;
        sum(root, targetSum, 0, ans);
        return ans;   
    }
};
