class Solution {
private:
    void solve(int i, int tar, vector<int>& can, vector<int>& ans, vector<vector<int>>& res)
    {
        if(i >= can.size())
        {
            if(tar == 0)
                res.push_back(ans);
            return;
        }
        if(can[i] <= tar)
        {
            ans.push_back(can[i]);
            solve(i, tar - can[i], can, ans, res);
            ans.pop_back();
        }
        solve(i + 1, tar, can, ans, res);
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> ans;
        solve(0, target, candidates, ans, res);
        return res;
    }
};
