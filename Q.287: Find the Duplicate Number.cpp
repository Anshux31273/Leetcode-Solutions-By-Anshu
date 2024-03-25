class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> u;
        for(int i : nums) u[i] ++;

        for(auto it : u)
        {
            if(it.second > 1)
            return it.first;
        }
        return -1;
    }
};
