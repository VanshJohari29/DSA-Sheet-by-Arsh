class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
		if(nums.size()<4) return ans;
		int n = nums.size();
		sort(nums.begin(), nums.end());

		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				int front=j+1, back=n-1;
				int target_2 = target - nums[i] - nums[j];
				while(front<back){
					int sum_2 = nums[front] + nums[back];
					if(sum_2<target_2)
						front++;
					else if(sum_2>target_2)
						back--;
					else{
						vector<int> quad(4, 0);
						quad[0] = nums[i];
						quad[1] = nums[j];
						quad[2] = nums[front];
						quad[3] = nums[back];
						ans.push_back(quad);

						while(front<back && nums[front] == quad[2]) ++front;

						while(back>front && nums[back] == quad[3]) --back;                    

						}
				  }
				while(j+1<n && nums[j+1] == nums[j]) ++j;
			}
			 while(i+1<n && nums[i+1] == nums[i]) ++i;
		}
		return ans;
    }
};
