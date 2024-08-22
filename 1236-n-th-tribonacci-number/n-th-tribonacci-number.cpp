class Solution {
public:
    int tribonacc(int n, vector<int> &dp) {
        if(n==0) return 0;
        if(n==1 || n==2) return 1;
        if(dp[n]!=-1) return dp[n];
        return dp[n]=tribonacc(n-3, dp) + tribonacc(n-2, dp) + tribonacc(n-1, dp);
    }
    int tribonacci(int n){
        vector<int> dp(n+1, -1);
        return tribonacc(n, dp);
    }
};