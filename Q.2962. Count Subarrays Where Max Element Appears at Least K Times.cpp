class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        long long max = *max_element(nums.begin(), nums.end());
        long long con = 0, i = 0, j = 0, res = 0;
        while(j < nums.size() || i > j)
        {
            if(nums[j] == max)  con ++;
            while(con >= k)
            {
                if(nums[i] == max)  con --;
                i ++;
                res += nums.size() - j;
            }
            j ++;
        }
        return res;
    }
};
