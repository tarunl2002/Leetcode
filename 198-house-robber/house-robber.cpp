class Solution {
public:
    int rob(int n, vector<int> &nums, unordered_map<int, int> &memo) {
        if (n < 0) return 0;
        if (n == 0) return nums[0]; 
        if (memo.find(n) != memo.end()) return memo[n]; 
        

        memo[n] = max(rob(n-1, nums, memo), nums[n] + rob(n-2, nums, memo));
        return memo[n];
    }

    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;
        if (n == 1) return nums[0];
        
        unordered_map<int, int> memo;
        return rob(n-1, nums, memo);  
    }
};
