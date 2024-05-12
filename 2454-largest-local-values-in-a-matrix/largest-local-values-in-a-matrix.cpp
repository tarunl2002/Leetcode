class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n=grid.size();
       vector<vector<int>> maxLocal(n - 2, vector<int>(n - 2));
        for(int i=0;i<n-2;++i){
            for(int j=0;j<n-2;++j){
                int largest = 0;
                for(int k=i;k<i+3;k++){
                    for(int l=j;l<j+3;l++){
                        largest=max(largest, grid[k][l]);
                    }
                }
                cout<<largest<<endl; 
                maxLocal[i][j]=largest;
            }
        }
        return maxLocal;
    }
};