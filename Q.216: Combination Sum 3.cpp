class Solution {
private:
    void solve(int i, int s, int k, vector<int>& nums, vector<int>& ans, vector<vector<int>>& res)
    {
        if(i >= nums.size())
        {
            if(ans.size() == k && s == 0)
                res.push_back(ans);
            return;
        }
        if(ans.size() > k)  return;
        if(nums[i] <= s)
        {
            ans.push_back(nums[i]);
            solve(i + 1, s - nums[i], k, nums, ans, res);
            ans.pop_back();
        }
        solve(i + 1, s, k, nums, ans, res);
    }
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> nums;
        for(int i = 1;i <= 9;i ++)
            nums.push_back(i);
        vector<vector<int>> res;
        vector<int> ans;
        solve(0, n, k, nums, ans, res);
        return res;
    }
};
