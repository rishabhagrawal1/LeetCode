class Solution {
public:
    bool search(vector<vector<int>>& matrix, int target,int m, int n)
    {
        if(n < 0 || m >= matrix.size())
            return false;
        if(matrix[m][n] == target)
            return true;
        else if (matrix[m][n] > target)
            return search(matrix, target, m, n-1);
        else    
            return search(matrix, target, m+1, n);
    }
    
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        if(m == 0 || n == 0)
            return false;
        return search(matrix, target, 0, n-1);
    }
};