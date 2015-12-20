class Solution {
public:
void binarySum(string a,string b,string &res)
{
	int adder = 0, carry = 0, a1 = 0, b1 = 0;
	int la = a.length(), lb = b.length();
	while(la || lb)
	{
		if(la)
		{
			a1 = a[--la]-'0';
		}
		if(lb)
		{
			b1 = b[--lb]-'0';
		}
		adder = a1+b1+carry;
		if(adder == 1)
		{
			carry = 0; adder = 1;
		}
		if(adder == 2)
		{
			carry = 1; adder = 0;
		}
		else 	if(adder == 3)
		{
			carry = 1; adder = 1;
		}
		res.insert(0,((adder == 0)?"0":"1"));	
		adder = 0;a1 = 0; b1 = 0;
	}
	if(carry == 1)
		res.insert(0,((carry == 0)?"0":"1"));	
}


    string addBinary(string a, string b) {
    	string result;
	    binarySum(a,b,result);
	    return result;
    }
};