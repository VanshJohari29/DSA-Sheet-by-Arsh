class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n= nums.size();
        int count=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if(nums[i]==nums[i+1]){
                count=nums[i];
                break;
            }
        }
        return count;
    }
};
