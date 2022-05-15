class Solution {
public:
    int strStr(string haystack, string needle) {
      int h=haystack.size()-1,n=needle.size()-1,i=0;
    for(int i=0;i<=h;i++){
        if(haystack[i]==needle[0]){
            int count=i;
            int temp=0;
            for(int j=0;j<=n;j++){
                if(needle[j]==haystack[count]) count++;
                else 
                {
                    temp=1; 
                    break;
                }
            }
            if(temp==0) 
                return i;
        }
    }
    return -1;
    }
};
