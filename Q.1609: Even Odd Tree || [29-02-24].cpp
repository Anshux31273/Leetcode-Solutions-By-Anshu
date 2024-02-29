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
    bool isEvenOddTree(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        int lvl = -1;
        while(!q.empty())
        {
            vector<int> v;
            int size = q.size();
            lvl ++;
            for(int i = 0;i < size;i ++)
            {
                auto tmp = q.front();
                if(tmp->left != NULL)
                    q.push(tmp->left);
                if(tmp->right != NULL)
                    q.push(tmp->right);
                v.push_back(tmp->val);
                q.pop();
            }
            if(lvl%2 == 0)
            {
                for(int i = 0;i < v.size() - 1;i ++)
                {
                    if(v[i]%2 == 0)
                        return false;
                    if(v[i] >= v[i + 1])
                        return false;
                }
                if(v[v.size() - 1]%2 == 0)
                    return false;
            }
            else
            {
                for(int i = 0;i < v.size() - 1;i ++)
                {
                    if(v[i]%2 != 0)
                        return false;
                    if(v[i] <= v[i + 1])
                        return false;
                }
                if(v[v.size() - 1]%2 != 0)
                    return false;
            }
        }
        return true;
    }
};
