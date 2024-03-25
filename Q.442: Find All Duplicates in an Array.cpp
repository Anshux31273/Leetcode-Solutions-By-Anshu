class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int> u;
        for(auto i : nums)
        {
            u[i] ++;
        }
        vector<int> rem;
        for(auto i : u)
        {
            if(i.second > 1)
            {
                rem.push_back(i.first);
            }
        }
        return rem;
        
    }
};
