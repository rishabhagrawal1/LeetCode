class Solution {
public:
    bool isOpposite(char a, char b)
    {
        if(a == '(' && b == ')')
            return true;
        else if(a == '{' && b == '}')
            return true;
        else if(a == '[' && b == ']')
            return true;
        else 
            return false;
    }
    
    bool isValid(string s) {
        if(s.size() == 0)
            return false;
        stack<int> st;
        st.push(s[0]);
        for(int i = 1; i < s.size(); i++)
        {
            if(st.size() > 0 && isOpposite(st.top(),s[i]))
                st.pop();
            else    
                st.push(s[i]);  
        }
        if(st.size() > 0)
            return false;
        return true;
    }
};