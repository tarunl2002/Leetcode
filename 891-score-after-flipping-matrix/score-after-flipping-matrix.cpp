class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        int m=grid.size(); int n=grid[0].size();
        int res=0;
        for(int i=0;i<m;i++){
            if(grid[i][0]==0){
                for(int j=0;j<n;j++){
                    grid[i][j]==0 ? grid[i][j]=1 : grid[i][j]=0;
                }
            }
        }
        for(int j=1;j<n;j++){
            int countZ=0;
            for(int i=0;i<m;i++){
                if(grid[i][j]==0) countZ++;
            }
            if(countZ > m-countZ) {
                for(int i=0;i<m;i++){
                    grid[i][j] = 1-grid[i][j];
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1)
                res+=pow(2,n-j-1);
            }
        }
        return res;
    }
};