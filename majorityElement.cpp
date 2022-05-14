// 1 approach
class Solution {
public:
    int majorityElement(vector<int>& nums) {
      map<int,int>m1;
        int ans;
        for(int i=0;i<nums.size();i++){
            m1[nums[i]]++;
        }
        int max = nums.size()/2;
        for(auto it : m1)
            if(it.second>max)
                ans=it.first;
        return ans;
    }
};

// 2 approach 

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans;
        ans=nums[nums.size()/2];
        return ans;
    }
};
