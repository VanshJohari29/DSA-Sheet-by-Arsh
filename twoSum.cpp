// first approach is brute force with O(n^2) complexity 
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]+nums[j]==target){
                    ans.push_back(i);
                    ans.push_back(j);
                }
                
            }
        }
        return ans;
    }
};

// This is an optimized approach using hashmap with O(n) complexity
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m; // key: target-element, value:index
        const int n = nums.size();
        for(int i=0;i<n;++i){
            if(m.find(nums[i])!=m.end()) 
                return {m[nums[i]],i}; // if the current element is in the map, then we return the index of the first element and the index of the current one
            m[target-nums[i]] = i; // otherwise we put target-element in the map and we continue our search
        }
        return {0,0}; // useless, but we must return a vector<int>
    }
};
