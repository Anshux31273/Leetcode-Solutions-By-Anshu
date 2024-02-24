class Solution {
public:
    int maxArea(vector<int>& h) {
        vector<int> res;
        int n = h.size();
        int i = 0, j = n - 1;
        while(i < j)
        {
            int x = min(h[i], h[j]) * (j - i);
            res.push_back(x);
            if(h[i] < h[j])
                i ++;
            else
                j --;
        }
        int max = INT_MIN;
        for(auto i : res)
        {
            if(max < i) max = i;
        }
        return max;
    }
};
