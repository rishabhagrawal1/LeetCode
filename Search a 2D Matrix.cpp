class Solution {
public:
    int select_row(vector<vector<int>>& matrix, int target,int m, int n)
    {
        if(m > n)
            return -1;
        if(m == n)
            return m;
        int mid = m + (n-m)/2;
        if(matrix[mid][0] == target || matrix[mid][0] < target && matrix[mid+1][0] > target)
            return mid;
        else if (matrix[mid][0] > target)
            return select_row(matrix, target, m, mid - 1);
        else    
            return select_row(matrix, target, mid+1, n);
        
    }
    int search_row(vector<int>& row, int target, int m, int n)
    {
        if(m > n)
            return -1;
        int mid = m + (n-m)/2;
        if(row[mid] == target)
            return mid;
        else if (row[mid] < target)
            return search_row(row, target, mid+1, n);
        else    
            return search_row(row, target, m, mid - 1);
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        if(m == 0 || n == 0)
            return false;
        int row = select_row(matrix, target, 0, m-1);
        if(row == -1){ return false;}
        int index = search_row(matrix[row], target, 0, n-1);
        return (index == -1)? false: true; 
    }
};