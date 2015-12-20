class Solution {
public:
    int getPower2(int n, int* powVal)
    {
        int pow2 = 0;
        *powVal = 1;
        while(n > 1)
        {
            n = n/2;
            pow2++;
            *powVal = *powVal * 2;
        }
        return pow2;
    }
    double myPow(double x, int n) {
        if (x == 0)
            return 0;
        if (n == 0)
            return 1;
        if (n == 1)
            return x;
        long n1 = (long)n;    
        n1 = (n1 < 0)? -n1:n1;
        long n2 = n1;
        int pow2 = 0;
        int pow2Val = 1;
        double result = 1;
        while(n1 > 1)
        {
            n1 = n1/2;
            pow2++;
            pow2Val *= 2;
        }
        double arr[pow2];
        arr[0] = x;
        arr[1] = x*x;
        for(int i = 2; i <= pow2; i++)
        {
            arr[i] = arr[i-2]*arr[i-2]*arr[i-1]; 
        }
        int remain = n2 - pow2Val;
        result = result * arr[pow2];
        while (remain > 0)
        {
            if(remain == 1)
                return (n < 0)?1/(result * arr[0]):(result * arr[0]);
                
            result = result * arr[getPower2(remain, &pow2Val)];
            remain = remain - pow2Val;
        }
        return (n < 0)?(1/result):result;
    }
};