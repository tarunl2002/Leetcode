class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        unordered_map<int, vector<int>> l;
        for (const auto& edge : edges) {
            l[edge[0]].push_back(edge[1]);
            l[edge[1]].push_back(edge[0]);
        }

        unordered_set<int> s;
        function<bool(int)> dfs = [&](int node) {
            
            if (node == destination) {
                return true;
            }

            
            s.insert(node);

            
            for (int j : l[node]) {
                
                if (s.find(j) == s.end() && dfs(j)) {
                    return true;
                }
            }
            return false;
        };
        return dfs(source);
    }
};