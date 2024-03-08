class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int> u;
        for(auto i : nums)  u[i] ++;
        int max = -1;
        for(auto i : u)
        {
            if(max < i.second)
                max = i.second;
        }
        int res = 0;
        for(auto i : u)
        {
            if(i.second == max)
            {
                res += i.second;
            }
        }
        return res;
    }
};
