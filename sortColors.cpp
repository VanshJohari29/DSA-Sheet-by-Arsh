class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int i=0,j=n-1;
        int k=0;
        while(k<=j)
        {
           if(nums[k]==0)
           {   swap(nums[i],nums[k]);   //bring 0 to the front and increase i and k pointer 
               i++;
                k++;
              
           }
            else if(nums[k]==1)
            {

               k++;     // increase k pointer 
            }
            else{
                swap(nums[k],nums[j]);  // bring 2 to the last and decrease j pointer
                j--;
            }
          
        }
    }
};
