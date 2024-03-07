class Solution {
private:
    void solve(int i, int t, vector<int>& can, vector<int>& ans, vector<vector<int>>& res)
    {
        if(t == 0)
        {
            res.push_back(ans);
            return;
        }
        for(int it = i;it < can.size();it ++)
        {
            if(it > i && can[it] == can[it - 1])  continue;
            if(can[it] > t)  break;
            ans.push_back(can[it]);
            solve(it + 1, t - can[it], can, ans, res);
            ans.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> res;
        vector<int> ans;
        solve(0, target, candidates, ans, res);
        return res;

    }
};
