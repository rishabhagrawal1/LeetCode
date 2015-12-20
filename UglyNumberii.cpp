class Solution {
public:
    int nthUglyNumber(int n) {
        if(n == 0)
            return 0;
        int list[n] = {1};
        list[0] = 1;
        int m1 = 0,m2 = 0,m3 = 0;
        int min3 = 0;
        for(int i = 1; i < n ; i++)
        {
            min3 = min(list[m1]*2, min(list[m2]*3, list[m3]*5));
            if(list[m1]*2 == min3){
                m1++;
            }
            else if(list[m2]*3 == min3){
                m2++;
            }
            else{
                m3++;
            }
            if(min3 == list[i-1])
            {
                i = i-1;
                continue;
            }
            list[i] = min3;
        }
        return list[n-1];
    }
};