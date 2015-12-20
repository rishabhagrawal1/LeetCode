class Solution {
public:
    int climbStairs(int n) {
        int c[n];
        if(n == 0)
            return 0;
        c[0] = 1;
        c[1] = 2;
        if(n == 1)
            return c[0];
        if(n == 2)
            return c[1];
        for(int i = 2; i < n; i++)
            c[i] = c[i-1] + c[i-2];
        return c[n-1];    
    }
};