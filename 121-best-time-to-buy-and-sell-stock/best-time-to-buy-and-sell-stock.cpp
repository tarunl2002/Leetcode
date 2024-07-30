class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int m=0;
        int mini=INT_MAX;
        for(int i=0; i<prices.size();i++){
            
                mini=min(mini,prices[i]);
                m=max((prices[i]-mini), m);
            
        }
        return m;
    }
};