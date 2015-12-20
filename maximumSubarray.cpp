class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max = nums[0], current_max = nums[0];
        if(nums.size() == 0)
            return max;
        for(int i = 1; i < nums.size(); i++)
        {
            if((current_max = current_max + nums[i]) < nums[i])
                current_max = nums[i];
            if(current_max > max)
                max = current_max;
        }
        return max;
    }
};