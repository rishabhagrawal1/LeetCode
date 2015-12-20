class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int XorV = 0, i = 0;
        for(i = 0; i < n; i++)
        {
            XorV ^= nums[i];
        }
        for(i = 0; i < n; i++)
        {
            XorV ^= i;
        }
        return XorV ^ n;
    }
};