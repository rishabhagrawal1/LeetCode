class Solution {
public:
    vector<vector<int>> ans;
    vector<vector<int>> permuteUtil(vector<int> soFar, vector<int> remaining) {
        if(remaining.size() == 0){
            ans.push_back(soFar);
            return ans;
        }
        for(int i = 0; i < remaining.size(); i++)
        {
            soFar.push_back(remaining[i]);
            vector<int> rest;
            for(int j = 0; j < remaining.size(); j++)
            {
                if(i == j)
                    continue;
                rest.push_back(remaining[j]);
            }
            permuteUtil(soFar, rest);
            soFar.erase(soFar.begin() + soFar.size() - 1);
        }
        return ans;
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int n = nums.size();
        if(n == 0)
            return ans;
        vector<int> soFar;
        vector<int> remaining;
        for(int i = 0; i < n; i++)
        {
            remaining.push_back(nums[i]);
        }
        return permuteUtil(soFar, remaining);
    }
};