class Solution {
private:
    void solve(vector<int>& nums, vector<int>& ans, int map[], set<vector<int>>& res)
    {
        if(nums.size() == ans.size())
            res.insert(ans);
        for(int i = 0;i < nums.size();i ++)
        {
            if(!map[i])
            {
                ans.push_back(nums[i]);
                map[i] = 1;
                solve(nums, ans, map, res);
                ans.pop_back();
                map[i] = 0;
            }
        }
    }
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> ans;
        set<vector<int>> wow;
        int map[nums.size()];
        for(int i = 0;i < nums.size();i ++) map[i] = 0;
        solve(nums, ans, map, wow);
        for(auto i : wow)   res.push_back(i);
        return res;
    }
};
