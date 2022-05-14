lass Solution {
public:
    bool canJump(vector<int>& nums) {
          int n=nums.size();
        for(int i=1;i<n;i++){
            
            if(nums[i-1] == 0){ //if last element is 0 then it would jump 0 so will not reach the end
                return 0;
            }
            nums[i]=max(nums[i-1]-1,nums[i]);//max value of right now index and the next element
        }
        return 1;
    }
};
