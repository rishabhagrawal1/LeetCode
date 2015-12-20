class Solution {
public:
    int factors[3] = {2,3,5};
    bool isUgly(int num) {
        if(num == 0)
            return false;
        if(num == 1)
            return true;
        int factor =1;
        for(int i = 0; i < 3; i++)
        {
            factor = factors[i];
            while(num % factor == 0)
            {
                num = num / factor;
            }
        }
        if(num != 1)
            return false;
        else
            return true;
    }
};