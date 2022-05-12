class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        vector<int>count(k,0);
        int sum=0;
        for(int it : nums){
            sum += (it%k + k) % k;
            count[sum % k ]++;
        }
        int sol=count[0];
        for(int x : count)
            sol += (x*(x-1))/2;
        return sol;
        
    }
};
