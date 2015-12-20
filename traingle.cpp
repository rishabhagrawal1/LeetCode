class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int h = triangle.size();
        if(h == 0)
            return 0;
        int w = 0;    
        int val1 = 0, val2 = 0;    
        int arr[triangle[h-1].size()] = {0};
        for(int i = h-1; i >= 0; i--)
        {
            w = triangle[i].size();
            if(w == 1)
            {
                arr[0] = arr[0] + triangle[i][0]; 
            }
            for(int j = 0; j < w-1; j++)
            {
                arr[j] = min(arr[j] + triangle[i][j], arr[j+1] + triangle[i][j+1]);
            }
        }
        return arr[0];
    }
};