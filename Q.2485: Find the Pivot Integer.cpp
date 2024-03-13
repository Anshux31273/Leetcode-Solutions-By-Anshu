class Solution {
public:
    int pivotInteger(int n) {
        if(n == 1)  return 1;
        int r_sum = 0;
        int l_sum = 0;
        for(int i = 1;i <= n;i ++)
            l_sum += i;
        r_sum = n;
        for(int i = n - 1;i > 0;i --)
        {
            if(r_sum == l_sum)
                return i + 1;
            r_sum += i;
            l_sum -= (i + 1);
            cout<<l_sum<<" "<<r_sum<<endl;
            
        }
        return -1; 
    }
};
