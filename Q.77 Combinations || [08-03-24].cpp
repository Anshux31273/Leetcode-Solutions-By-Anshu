class Solution {
public:
    
    void check(int i, vector<int>& nums, vector<int>& ds, vector<vector<int>>& res, int k)
    {   
        if(i >= nums.size())
        {
            if(ds.size() == k)
            {
                res.push_back(ds);
            }
            return;
        }
        if(ds.size() > k)
            return;
        ds.push_back(nums[i]);
        check(i + 1, nums, ds, res, k);
        ds.pop_back();
        check(i + 1, nums, ds, res, k);
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> res;
        vector<int> ds;
        vector<int> nums;
        for(int i = 1;i <= n;i ++)
        {
            nums.push_back(i);
        }
        check(0, nums, ds, res, k);
        return res;
    }
};
