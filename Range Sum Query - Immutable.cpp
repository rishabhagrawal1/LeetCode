class NumArray {
public:
    vector<int> sumL;
    int n;
    NumArray(vector<int> &nums) {
        n = nums.size();
        if(n > 0)
        {    
            sumL.push_back(nums[0]);
            for(int i = 1; i < n; i++)
            {
                sumL.push_back(sumL[i -1] + nums[i]);     
            }
        }
    }

    int sumRange(int i, int j) {
        if(i > 0)
            return sumL[j] - sumL[i-1];
        else
            return sumL[j];
    }   
};


// Your NumArray object will be instantiated and called as such:
// NumArray numArray(nums);
// numArray.sumRange(0, 1);
// numArray.sumRange(1, 2);