class Solution {
public:
    unordered_map<int, int> mp;
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> temp = arr;
        sort(temp.begin(), temp.end());
        int rank=1;
        for(int i=0;i<temp.size();i++){
            if(mp.find(temp[i])==mp.end()){
                mp[temp[i]]=rank++;
            }
        }
        vector<int> ret(arr.size());
        for(int i=0;i<arr.size();i++){
            ret[i]=mp[arr[i]];
        }
        return ret;
    }
};