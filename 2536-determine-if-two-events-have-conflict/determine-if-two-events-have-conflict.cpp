class Solution {
public:
    bool haveConflict(vector<string>& v1, vector<string>& v2) {
        if(v1[0]<=v2[1] && v1[1]>=v2[0] ){
            return true;
        }
        return false;
    }
};