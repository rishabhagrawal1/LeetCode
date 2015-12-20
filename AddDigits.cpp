class Solution {
public:
    int addDigits(int num) {
        if(num == 0)
            return 0;
        int sum = num % 9;    
        return ((sum == 0)? 9: sum);
    }
};