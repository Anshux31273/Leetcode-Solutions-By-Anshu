class Solution {
private:
    void solve(vector<int>& nums, vector<int>& ans, int map[], vector<vector<int>>& res)
    {
        if(ans.size() == nums.size())
            res.push_back(ans);
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
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> ans;
        int map[nums.size()];
        for(int i = 0;i < nums.size();i ++) map[i] = 0;
        solve(nums, ans, map, res);
        return res;
    }
};
