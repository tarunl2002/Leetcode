class Solution {
public:
    int climbStairs(int n, vector<int>& dp) {
        if (n <= 1) return 1;
        if (dp[n] != -1) return dp[n];  // Check if the result is already computed
        
        dp[n] = climbStairs(n - 1, dp) + climbStairs(n - 2, dp);  // Store the result in dp array
        return dp[n];
    }

    int climbStairs(int n) {
        vector<int> dp(n + 1, -1);  // Initialize the dp array with -1
        return climbStairs(n, dp);
    }
};
