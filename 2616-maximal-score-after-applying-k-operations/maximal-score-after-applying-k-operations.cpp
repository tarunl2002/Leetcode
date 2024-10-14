class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        long long score=0;
            priority_queue<int> maxHeap(nums.begin(), nums.end());
        while(k--){
            int maxEl = maxHeap.top();
            maxHeap.pop();
            score+=maxEl;
            int newEl = static_cast<long long>(ceil(static_cast<double>(maxEl) / 3));
            maxHeap.push(newEl);
        }
        return score;
    }
};