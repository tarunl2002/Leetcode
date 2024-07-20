class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
        int i=rowSum.size()-1;
        int j=colSum.size()-1;
         vector<vector<int>> matrix(rowSum.size(), vector<int>(colSum.size(),0));
        while(i>=0 && j>=0){
        if(rowSum[i]<colSum[j]){
            matrix[i][j] = rowSum[i];
            colSum[j]-=rowSum[i];
            i--;
        }
        else{
            matrix[i][j] = colSum[j];
            rowSum[i]-=colSum[j];
            j--;
        }
        }
        return matrix;
    }
};