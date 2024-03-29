class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        unordered_map<string, vector<int>> m;
        for(int i = 0;i < strs.size();i ++)
        {
            string s = strs[i];
            sort(s.begin(), s.end());
            m[s].push_back(i);
        }
        for(auto i : m)
        {
            vector<string> temp;
            for(auto j : i.second)
            {
                temp.push_back(strs[j]);
            }
            res.push_back(temp);
        }
        return res;
    }
};
