class Solution {
public:

    int minof3(int a, int b, int c)
    {
        return std::min({a, b, c});
    }
    
    int maximalSquare(vector<vector<char>>& matrix) {
        int m = matrix.size();
        if(m == 0)
            return 0;
        int n = matrix[0].size();
    
        int a[m][n];
        int i = 0,j = 0;
        int max = 0;
        for (i = 0; i < n; i++)
        {
             a[0][i] = (matrix[0][i] == '1')? 1: 0;
             if(!max &&  a[0][i])
                max = 1;
        }
        
        if(m == 1)
            return max;
            
        for (i = 0; i < m; i++)
        {
             a[i][0] = (matrix[i][0] == '1')? 1: 0;
             if(!max &&  a[i][0])
                max = 1;
        }
        
        if(n == 1)
            return max;
        
        for (i = 1; i < m; i++)
        {
            for (j = 1; j < n; j++)
            {
                if(matrix[i][j] == '1')
                {
                    a[i][j] = minof3(a[i-1][j-1], a[i-1][j], a[i][j-1]) + 1;
                }
                else
                {
                    a[i][j] = 0;
                }
                max = (max < a[i][j]) ? a[i][j] : max;
            }    
        }
        return max*max;
    }
};