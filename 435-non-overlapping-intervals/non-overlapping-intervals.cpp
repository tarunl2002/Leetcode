class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& arr) {
        sort(arr.begin(), arr.end(),[]( const vector<int>& a, const vector<int>& b){
            return a[1]<b[1]; 
        });
        int c=0;
        int start=arr[0][0];
        int end = arr[0][1]; 
        for(int i=1; i<arr.size();i++){
            if(end>arr[i][0]){
                c++;
            }
            else{
                start=arr[i][0];
                end=arr[i][1];
            }
        }
        return c;
    }
};