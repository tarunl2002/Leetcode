class Solution {
public:
bool canJump(int ind,vector<int> &nums, int &n, vector<int> &dp){
    if(dp[ind]!=-1) return dp[ind];
    if(ind>=n-1) return true;
    for(int j=1; j<=nums[ind];j++){
         if(canJump(ind+j, nums, n, dp)){
            return dp[ind]=true;
         }
    }
    return dp[ind]=false;
}
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        if(n<=1) return true;
        vector<int> dp(n+1, -1);
        return canJump(0,nums,n, dp);
    }
};