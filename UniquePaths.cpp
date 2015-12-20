class Solution {
public:
    int uniquePaths(int m, int n) {
        int path[m][n];
        int i =0 , j=0;
        if(m == 0 || n == 0)
            return 0;
        
        if (m == 1 || n == 1)
            return 1;
        path[0][0] = 1;
        
        for(i = 1; i < n; i++)
            path[0][i] = 1;
        for(i = 1; i < m; i++)
            path[i][0] = 1;
            
        for(int i = 1; i < m; i++)
        {
            for(int j = 1; j < n; j++)
            {
                path[i][j] = path[i-1][j] + path[i][j-1];     
            }
        }
        return path[m-1][n-1];
    }
};