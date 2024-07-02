class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> temp;
        for(int i=0;i<nums.size();i++){
            temp.push_back(nums[i]);
        }
        for(int i=0;i<nums.size();i++){
            nums[(i+k)%nums.size()] = temp[i];
        }
    }
};