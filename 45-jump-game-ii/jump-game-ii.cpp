class Solution {
public:
    int jum(int ind, vector<int>& nums, vector<int>& dp) {
        int n = nums.size();
        if (ind >= n - 1) return 0;  // Base case: If we've reached or surpassed the last index
        if (dp[ind] != -1) return dp[ind];  // Return already computed result

        int min_jumps = INT_MAX;
        for (int j = 1; j <= nums[ind]; j++) {  // j starts from 1 to avoid 0-jump
            if (ind + j < n) {
                int jumper = jum(ind + j, nums, dp);
                if (jumper != INT_MAX) {  // Only consider valid paths
                    min_jumps = min(min_jumps, jumper + 1);  // Add 1 for the current jump
                }
            }
        }
        
        return dp[ind] = min_jumps;  // Memoize and return the minimum jumps from current index
    }

    int jump(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n, -1);  // Initialize DP array with -1 for memoization
        return jum(0, nums, dp);  // Start the jump from index 0
    }
};
