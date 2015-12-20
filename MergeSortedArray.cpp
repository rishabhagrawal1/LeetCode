class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int f = m-1, l = m+n-1;
        int s = n-1;
        while(f >= 0 && s >= 0)
        { 
            if(nums1[f] >= nums2[s])
            {
                nums1[l] = nums1[f];
                f--;l--;
            }
            else if(nums1[f] < nums2[s])
            {
                nums1[l] = nums2[s];
                s--;l--;
            }
        }
        if(s >= 0)
        {
            while(s >= 0)
            {
                nums1[l] = nums2[s];
                s--; l--;
            }
        }
    }
};