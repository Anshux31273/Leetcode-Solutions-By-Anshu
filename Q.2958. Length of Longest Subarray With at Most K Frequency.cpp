class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int i = 0, j = 0;
        unordered_map<int, int> u;
        int res = 0, max = INT_MIN;
        while(j < nums.size())
        {
            u[nums[j]] ++;
            while(u[nums[j]] > k)   u[nums[i ++]] --;
            res = 1 + (j - i);
            if(max < res)   max = res;
            j ++;   
        }
        return max;
    }
};
