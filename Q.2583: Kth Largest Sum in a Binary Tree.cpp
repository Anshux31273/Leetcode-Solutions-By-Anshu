class Solution {
public:
    long long kthLargestLevelSum(TreeNode* root, int k) {
        queue<TreeNode*> q;
        priority_queue<long long> pq;
        q.push(root);
        while(!q.empty())
        {
            auto s = q.size();
            long long sum = 0;
            for(int i = 0;i < s;i ++)
            {
                auto f = q.front();
                q.pop();
                if(f->left != NULL)
                    q.push(f->left);
                if(f->right != NULL)
                    q.push(f->right);
                sum += f->val;
            }
            pq.push(sum);
        }
        if(pq.size() < k)   return -1;
        k --;
        while(k --)
            pq.pop();
        return pq.top();
    }
};
