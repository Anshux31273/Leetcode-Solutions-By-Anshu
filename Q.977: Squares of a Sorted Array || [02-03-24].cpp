class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans(nums.size(), 0);
        int i = 0, j = nums.size() - 1;
        int l = j;
        while(i <= j)
        {
            if(pow(nums[i], 2) >= pow(nums[j], 2))
            {
                ans[l] = nums[i] * nums[i];
                i ++;
                l --;
            }
            else
            {
                ans[l] = nums[j] * nums[j];
                j --;
                l --;
            }
        }
        return ans;
        
    }
};
