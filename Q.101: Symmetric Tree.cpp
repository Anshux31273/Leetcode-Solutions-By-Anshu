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
    bool check(TreeNode* left, TreeNode* right)
    {
        if(left == NULL && right == NULL)
            return 1;
        else if(left == NULL || right == NULL)
            return 0;
        else if(left->val != right->val)
            return 0;
        int ans = check(left->left, right->right);
        if(ans == 0)    return ans;
        ans = check(left->right, right->left);
        return ans;
    }
public:
    bool isSymmetric(TreeNode* root) {
        return check(root->left, root->right);
    }
};
