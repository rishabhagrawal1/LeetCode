class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        std::set<int> myset;
        std::set<int>::iterator it;
        if (nums.size() == 0)
            return false;
        myset.insert(nums[0]);
        for (int i =1; i< nums.size(); i++)
        {
            it = myset.find(nums[i]);
            if(it == myset.end())
                myset.insert(nums[i]);
            else 
                return true;
        }
        return false;
    }
};