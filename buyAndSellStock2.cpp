class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int low = prices[0];
        int ans = 0;
        for(int it : prices){
            if(it <= low)
                low = it;
            else {
                ans += (it-low);
                low = it;
            }
        }
        return ans;
    }
};
