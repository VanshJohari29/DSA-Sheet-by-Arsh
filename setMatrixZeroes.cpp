// Question asked in Amazon Interview
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int,int>> v;
    int n=matrix.size();
    int m=matrix[0].size();
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==0){
                v.push_back({i,j});
            }
        }
    }
    
    for(int i=0;i<v.size();i++){
        int x=v[i].first;
        int y=v[i].second;
        for(int i=0;i<m;i++){
            matrix[x][i]=0;//keeping row constant
        }
        for(int i=0;i<n;i++){
            matrix[i][y]=0;//keeping column constant
        }
    }
    }
};
