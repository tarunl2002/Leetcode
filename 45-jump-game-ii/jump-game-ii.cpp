class Solution {
public:
    int jum(int ind, vector<int> &nums, vector<int> &dp){
        int n=nums.size();
        if(ind >= n-1) return 0;
        if(dp[ind]!=-1) return dp[ind];
        int m=INT_MAX;
        for(int j=1;j<=nums[ind];j++){
           if(ind+j<n){
            int jumper=jum(ind+j, nums, dp);
            if (jumper != INT_MAX){
            m=min(m, jumper+1);
            }
           }
        }
        return dp[ind]=m;

    }
    int jump(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n+1, -1);
        return jum(0,nums, dp);
    }
};