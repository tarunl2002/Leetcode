class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int mx=0;
        for(int i=0;i<nums.size();i++){
            if(find(nums.begin(), nums.end(), -nums[i]) != nums.end()){
                mx=max(mx,nums[i]);
            }
        }
        if(mx==0) return -1;
        else return mx;
    }
};