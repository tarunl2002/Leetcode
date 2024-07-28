class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        for(int i=0;i<nums.size();i++){
            int rem=target-nums[i];
            if(mp.count(rem)){
                return {i, mp[rem]};
            }
            mp[nums[i]] = i;
        }
        return {-1,-1};
    }
};
auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();