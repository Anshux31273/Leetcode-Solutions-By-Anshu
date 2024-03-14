class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& a) {
        sort(a.begin(), a.end());
        int i = 0;
        long long m = mass;
        for(i = 0;i < a.size();i ++)
        {
            if(a[i] <= m)
            {
                m += a[i];
            }
            else
                break;
        }
        if(i > a.size() - 1)
            return 1;
        else
            return 0;
    }
};
