class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& p) {
        sort(p.begin(), p.end(), [&] (vector<int> &a, vector<int> &b){
            if(a[0]==b[0]){
                return a<b;
            }
            return a<b;
        });
        int end=p[0][1];
        int start=p[0][0];
        int n=1;
        for(int i=1;i<p.size();i++){
            if(p[i][0]<=end){
                start=max(start,p[i][0]);
                end=min(end,p[i][1]);
            }
            else{
                n++;
                end=p[i][1];
            }
        }
        return n;
    }
};