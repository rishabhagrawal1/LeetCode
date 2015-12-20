class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        if(n == 0)
            return 0;
        int LIS[n];
        int max = 1;
        for(int i = 0; i < n; i++)
        {
            LIS[i] = 1;
        }
        for(int i = 1; i < n; i++)
        {
            for(int j = 0; j < i; j++)
            {
                if(nums[i] > nums[j] && LIS[i] < LIS[j] + 1)
                {
                    LIS[i] = LIS[j] + 1;
                }
            }
            if(max < LIS[i])
                max = LIS[i];
        }
        return max;
    }
};