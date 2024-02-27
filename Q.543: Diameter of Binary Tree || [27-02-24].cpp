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
    int sol(TreeNode* root, int& maxi)
    {
        if(root == NULL)
            return 0;
        int lh = sol(root->left, maxi);
        int rh = sol(root->right, maxi);
        maxi = max(maxi, lh + rh);

        return 1 + max(lh, rh);
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int res = 0;
        int temp = sol(root, res);

        return res;
    }
};
