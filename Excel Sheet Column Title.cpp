class Solution {
public:
    string convertToTitle(int n) {
        if(n == 0)
            return 0;
        string s = "";
        int i = 0;
        char c = 'A';
        while(n > 26)
        {
            c = 'A' + ((n % 26) == 0? 26: (n % 26)) - 1;
            s = c + s;
            if(n % 26 == 0)
                n = n/26 -1;
            else
                n = n/26;
        }
        c = 'A' + ((n % 26) == 0? 26: (n % 26)) - 1;
        s = c + s;
        return s;
    }
};