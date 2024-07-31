class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& v) {
        sort(v.begin(), v.end(), [&] (vector<int> &a, vector<int> &b){
            if(a[1]==b[1]){
                return a[0]<b[0];
            }
            return a[1]<b[1];
        });
        int r=0;
        int end=v[0][1];
        for(int i=1;i<v.size();i++){
            if(v[i][0]<end){
                r++;
            }
            else{
                end=v[i][1];
            }

        }
        return r;
    }
};