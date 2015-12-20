class Solution {
public:
    
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        int path[m][n];
        int i =0 , j=0;
        bool row0 = false;
        bool col0 = false;
        
        if(m == 0 || n == 0)
            return 0;
            
        for(i =0; i < n; i++)
        {
            if(obstacleGrid[0][i] == 1)
            {
                row0 = true;
            }
            path[0][i] = row0?0:1;
        }
        
        for(i =0; i < m; i++)
        {
            if(obstacleGrid[i][0] == 1)
            {
                col0 = true;
            }
            path[i][0] = col0?0:1;
        }
        
        if(m == 1)
        {
            return (row0 == true)? 0: 1;
        }
        if(n == 1)
        {    
            return (col0 == true)? 0: 1;
        }   
    
        for(int i = 1; i < m; i++)
        {
            for(int j = 1; j < n; j++)
            {
                if(obstacleGrid[i][j] == 1)
                    path[i][j] = 0;
                else    
                    path[i][j] = path[i-1][j] + path[i][j-1];     
            }
        }
        return path[m-1][n-1];
    }
};