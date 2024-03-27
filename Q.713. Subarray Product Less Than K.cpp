class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        long long pro = 1;
        int i = 0, j = 0;
        int res = 0;
        if(k <= 1)  return 0;
        while(j < nums.size())
        {
            pro *= nums[j];
            while(pro >= k)
            {
                pro /= nums[i];
                i ++;
            }
            res += 1 + (j - i);
            j ++;
        }
        return res;
    }
};
