class Solution {
public:
    int minCost(int i, vector<int> &cost, vector<int> &dp){
        int n=cost.size();
        if(i>=n) return 0;
        if(dp[i]!=-1) return dp[i];
        int left = minCost(i+1,cost, dp) + cost[i];
        int right = minCost(i+2, cost, dp) + cost[i];
        dp[i]=min(left, right);
        return dp[i];
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int> dp(n+1, -1);
        return min(minCost(0,cost, dp), minCost(1,cost,dp));
    }
};