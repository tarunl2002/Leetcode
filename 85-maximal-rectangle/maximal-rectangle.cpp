class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        std::ios::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);
        stack<int> stk;
        int max_space = 0;
        for(int i=0;i<heights.size();i++){
            if(stk.empty()){
                if (heights[i])
                    stk.push(heights[i]);
                continue;
            }
            if(stk.top() <= heights[i]){
                stk.push(heights[i]);
            } else {
                int count_pop = 0;
                while(!stk.empty() && stk.top() > heights[i]){
                    count_pop++;
                    int temp = stk.top();
                    stk.pop();
                    max_space = max(max_space,temp*count_pop);
                }
                while(count_pop){
                    count_pop--;
                    stk.push(heights[i]);
                }
                stk.push(heights[i]);
            }
        }
        int count_pop = 0;
        while(!stk.empty()){
            count_pop++;
            int temp = stk.top();
            // cout<<temp<<endl;
            stk.pop();
            max_space = max(max_space,temp*count_pop);
            // cout<<max_space<<endl;
        }
        return max_space;
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        vector<int> vec(matrix[0].size(),0);
        int maximal = 0;
        for(auto &m:matrix){
            for(int i=0;i<m.size();i++){
                if(m[i] != '0')
                    vec[i]++;
                else {
                    vec[i] = 0;
                }                
            }
            maximal = max(maximal, largestRectangleArea(vec));
        }
        return maximal;
    }
};