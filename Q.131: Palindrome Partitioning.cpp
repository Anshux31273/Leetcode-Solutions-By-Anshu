class Solution {
private:
    void solve(int ind, string& s, vector<string>& ans, vector<vector<string>>& res)
    {
        if(ind == s.size())
        {
            res.push_back(ans);
            return;
        }
        for(int i = ind;i < s.size();i ++)
        {
            if(ispal(s, ind, i))
            {
                ans.push_back(s.substr(ind, i - ind + 1));
                solve(i + 1, s, ans, res);
                ans.pop_back();
            }
        }
    }
    bool ispal(string s, int st, int ed)
    {
        while(st <= ed)
        {
            if(s[st++] != s[ed--])
                return false;
        }
        return true;
    }
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> res;
        vector<string> ans;
        solve(0, s, ans, res);
        return res;
    }
};
