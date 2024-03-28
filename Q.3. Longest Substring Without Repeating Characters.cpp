class Solution {
public:
    int lengthOfLongestSubstring(string nums) {
        int i = 0, j = 0;
        unordered_map<int, char> u;
        if(nums.size() == 0)    return 0;
        int res = 0, max = INT_MIN;
        while(j < nums.size())
        {
            u[nums[j]] ++;
            while(u[nums[j]] > 1)   u[nums[i ++]] --;
            res = 1 + (j - i);
            if(max < res)   max = res;
            j ++;   
        }
        return max;
    }
};
