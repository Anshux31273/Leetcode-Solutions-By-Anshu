class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(), points.end());
        int x = points[0][0], y = points[0][1];
        int con = 1;
        for(int i = 1;i < points.size();i ++)
        {
            cout<<points[i][0]<<" "<<points[i][1]<<endl;
            if(points[i][0] >= x && points[i][0] <= y)
            {
                if(points[i][1] < y)
                {
                    y = points[i][1];
                }
                continue;
            }
            else
            {
                con ++;
                x = points[i][0];
                y = points[i][1];
            }
        }
        
        return con;
    }
};
