class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i = 1;i <= nums.size();i ++)
        {
            int st = 0, ed = nums.size() - 1, umm = -1;
            while(st <= ed)
            {
                int mid = (st + ed)/2;
                if(nums[mid] == i)
                {
                    umm = i;
                    break;
                }
                else if(nums[mid] > i)
                {
                    ed = mid - 1;
                }
                else
                {
                    st = mid + 1;
                }
            }
            if(umm == -1)
            {
                return i;
            }
        }
        return nums.size() + 1;

    }
};
