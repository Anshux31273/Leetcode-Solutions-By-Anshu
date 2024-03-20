class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int sum = 0;
        int max = INT_MIN;
        set<int> s;
        int i = 0, j = 0;
        while(j < nums.size())
        {
            if(s.find(nums[j]) == s.end())
            {
                sum += nums[j];
                s.insert(nums[j]);
                j ++;
            }
            else
            {
                if(max < sum)   max = sum;
                while(nums[i] != nums[j])
                {
                    s.erase(nums[i]);
                    sum -= nums[i];
                    i ++;
                }
                s.erase(nums[i]);
                sum -= nums[i];
                i ++;
                sum += nums[j];
                s.insert(nums[j]);
                j ++;
            }
        }
        if(max < sum)   max = sum;
        return max;
    }
};
