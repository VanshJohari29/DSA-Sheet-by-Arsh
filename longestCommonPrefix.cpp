class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
         int n = strs.size();
        
        string p;
        
        int j=0;
        while(strs[0].size() != j)
        {
            char temp = strs[0][j];
            
            for(int i=0; i<n; i++)
            {
                if(strs[i].size() == j || strs[i][j] != temp)
                {
                    return p;
                }
            }
            j++;
            p += temp;
        }
        
        return p;
    }
};
