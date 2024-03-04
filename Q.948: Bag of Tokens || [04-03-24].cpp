class Solution {
public:
    int bagOfTokensScore(vector<int>& t, int p) {
        sort(t.begin(), t.end());
        int n = t.size();
        int i = 0, j = n - 1;
        int score = 0, res = 0;
        while(i <= j)
        {
            if(p >= t[i] )
            {
                p -= t[i];
                score ++;
                i ++;
                if(res < score)
                    res = score;
            }
            else if(score > 0)
            {
                p += t[j];
                score --;
                j --;
                if(res < score)
                    res = score;
            }
            else
                break;
        }
        return res;
    }
};
