class Solution {
public:
    int climbStairs(int n, unordered_map<int, int> &dp) {
        if(n<=1) return 1;
        if(dp.find(n) != dp.end()) return dp[n];
        dp[n]=climbStairs(n-1, dp)+climbStairs(n-2, dp);
        return dp[n];
    }
    int climbStairs(int n){
        unordered_map<int, int> dp;
        return climbStairs(n,dp);
    }
};