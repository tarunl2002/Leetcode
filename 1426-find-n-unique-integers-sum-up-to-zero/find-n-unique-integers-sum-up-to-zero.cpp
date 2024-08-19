class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> v;
        for(int i=1;i<=n/2;i++){
                v.push_back(-i);
                v.push_back(i);
        }
        if(n%2 != 0) v.push_back(0);
        return v;
    }
};
auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();