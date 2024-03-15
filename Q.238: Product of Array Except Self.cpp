class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> por;
        long long pro = 1;
        int flag = 0;
        for(int i = 0;i < nums.size();i ++)
        {
            if(nums[i] == 0)
            {
                flag ++;
            }
            if(nums[i] != 0 && flag < 2)
                pro *= nums[i];
            if(flag > 1)            
                pro *= nums[i];
        }
        for(int i = 0;i < nums.size();i ++)
        {
            if(flag == 0)
            {
                por.push_back(pro/nums[i]);
            }
            else
            {
                if(nums[i] != 0)
                    por.push_back(0);
                else
                    por.push_back(pro);
            }

        }
        return por;
    }
};
