class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size() , left=0,right=n-k,sum=0,total=0;
        
        total=accumulate(cardPoints.begin(),cardPoints.end(),total);
         
        for(int i=left;i<right;i++){    //right because we need just k numbers so looping through rest - k 
            sum +=cardPoints[i];
        }
        
        int ans = total - sum;
        
        while(right < n){
            sum-=cardPoints[left++];
            sum+=cardPoints[right++];
            
            ans = max (ans , total - sum);
        }
        
        return ans;
        
        
    }
};
