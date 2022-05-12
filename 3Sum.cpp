class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        vector<vector<int>>res;
        if(nums.size()<3)
            return res;
        for(int i=0;i<nums.size()-2;i++)           //we have to find triplets 
        {
        if(i==0 || (i>0 && nums[i] != nums[i-1])) //if i is our first number or if not then to avoid duplicates
        {
            int lo = i+1 , hi = nums.size()-1 , sum = 0 - nums[i]; // lo is i+1 because we already took i as a 
            while(lo<hi)
            {
                if( nums[lo] + nums[hi] == sum)
                {
                  vector<int> temp;
                temp.push_back(nums[i]);
                temp.push_back(nums[lo]);
                temp.push_back(nums[hi]);
                res.push_back(temp);//res is vector of vector
                
                while(lo<hi && nums[lo]==nums[lo+1])lo++;
                while(lo<hi && nums[hi]==nums[hi-1])hi--;
                
                lo++,hi--;
            }
            else if(nums[lo] + nums[hi] < sum) lo++;
            else hi--;
        }
            
    }
        
    }
        return res;
    }
};
