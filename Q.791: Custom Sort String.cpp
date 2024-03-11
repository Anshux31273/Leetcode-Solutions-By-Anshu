class Solution {
public:
    string customSortString(string order, string s) {
        vector<pair<char, int>> u;
        unordered_map<char, int> ind;
        string res = "", ans = "";
        for(int i = 0;i < order.size();i ++)
        {
            u.push_back({order[i], 0});
            ind[order[i]] = i;
        }
        
        for(int i = 0;i < s.size();i ++)
        {
            if(ind.find(s[i]) != ind.end())
            {
                u[ind[s[i]]].second ++;
            }
            else
                ans += s[i];

        }
        for(int i = 0;i < u.size();i ++)
        {
            while(u[i].second > 0)
            {
                res += u[i].first;
                u[i].second --;
            }
        }
        sort(ans.begin(), ans.end());
        res += ans;
        return res;
    }
}; 
