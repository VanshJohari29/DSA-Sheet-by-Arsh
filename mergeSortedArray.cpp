class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i = 0; i<n; i++)//here we are incrementing m value in nums1
             nums1[m++] = nums2[i];// and hence ignoring 0 and merging nums2 to nums 1
        sort(nums1.begin(), nums1.end());
    }
};
