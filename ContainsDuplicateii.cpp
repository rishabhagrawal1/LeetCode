class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        std::map<int,int> mymap;
        std::map<int,int>::iterator it;
        if (nums.size() == 0)
            return false; 
        mymap.insert(std::pair<int,int>(nums[0],0));
        for (int i =1; i< nums.size(); i++)
        {
            it = mymap.find(nums[i]);
            if(it == mymap.end())
                mymap.insert(std::pair<int,int>(nums[i],i));
            else 
                if(i - it->second <= k)
                    return true;
               else
                    mymap[nums[i]] = i;
        }
        return false;
    }
};