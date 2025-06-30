class Solution {
public:
    int findLHS(vector<int>& nums) {
        sort(nums.begin(), nums.end() );
        int i=0, j=0;
        int mx=0;
        while(i<=j && j<nums.size()){
            if(nums[j]-nums[i]==1 ){
                mx=max(mx,j-i+1);
                j++;
            }
            else if(nums[j] - nums[i]>1) {
                i++;
            }
            else{
                j++;
            }
        }
        return mx;
    }
};