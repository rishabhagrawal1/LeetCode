class Solution {
public:
    int titleToNumber(string s) {
        int n = s.size();
        int column = 0;
        for(int i = 0; i < n ; i++)
        {
            column += ((s[n-i-1] - 'A' + 1) * pow(26,i));
        }
        return column;
    }
};