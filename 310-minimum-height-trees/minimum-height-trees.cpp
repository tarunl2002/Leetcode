class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        if (n == 1) {
        return {0};  // If there's only one node, it's the root of the MHT
    }

    unordered_map<int, vector<int>> graph;
    for (const auto& edge : edges) {
        graph[edge[0]].push_back(edge[1]);
        graph[edge[1]].push_back(edge[0]);
    }

    vector<int> leaves;
    for (int node = 0; node < n; ++node) {
        if (graph[node].size() == 1) {
            leaves.push_back(node);
        }
    }

    int remainingNodes = n;
    while (remainingNodes > 2) {
        remainingNodes -= leaves.size();
        vector<int> newLeaves;
        for (int leaf : leaves) {
            int neighbor = graph[leaf][0];
            graph[neighbor].erase(remove(graph[neighbor].begin(), graph[neighbor].end(), leaf), graph[neighbor].end());
            if (graph[neighbor].size() == 1) {
                newLeaves.push_back(neighbor);
            }
        }
        leaves = newLeaves;
    }

    return leaves;
}
};