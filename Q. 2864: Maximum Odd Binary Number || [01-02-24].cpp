class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        string res = "";
        int con = 0;
        for(int i = 0;i < s.size();i ++)
        {
            if(s[i] == '1')
                res += "1";
            else
                con ++;
        }   
        res.pop_back();
        while(con --)
        {
            res += '0';
        }
        res += "1";
        return res;
    }
};
