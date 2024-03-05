class Solution {
public:
    int minimumLength(string s) {
        int i = 0, j = s.size() - 1;
        string temp = " ";
        while(i < j)
        {
            if(s[i] == s[j])
            {
                temp += s[i];
                i ++;
                j --;
            }
            else if(s[i] == temp[temp.size() - 1])
            {
                i ++;
            }
            else if(s[j] == temp[temp.size() - 1])
            {
                j --;
            }
            else
            {
                return j - i + 1;
            }
        }
        if(i == j && s[i] != temp[temp.size() - 1])
            return 1;
        
        return 0;
    }
};
