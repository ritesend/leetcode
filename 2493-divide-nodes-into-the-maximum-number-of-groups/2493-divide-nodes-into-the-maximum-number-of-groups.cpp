class Solution {
public:
    int partition(int root, vector<vector<int>>& graph, vector<bool>& visited) {
        if (visited[root])
            return 0;
        visited[root] = true;
        vector<int> q{ root }, group(graph.size(), -1);
        group[root] = 0;
        while (!q.empty()) {
            vector<int> q1;
            for (const int& i : q)
                for (const int& j : graph[i])
                    if (group[j] == -1) {
                        group[j] = group[i] + 1;
                        q1.push_back(j);
                    }
                    else if (abs(group[i] - group[j]) != 1)
                        return -1;
            swap(q, q1);
        }
        int res = 0;
        for (int i = 0; i < graph.size(); i++)
            if (group[i] != -1)
                res = max( { res, group[i] + 1, partition(i, graph, visited) } );
        return res;
    }
    int magnificentSets(int n, vector<vector<int>>& edges) {
        vector<vector<int>> graph(n + 1);
        for (const auto& e : edges) {
            graph[e[0]].push_back(e[1]);
            graph[e[1]].push_back(e[0]);
        }
        int res = 0;
        vector<bool> visited(501);
        for (int i = 1; i <= n; i++) {
            int setGroups = partition(i, graph, visited);
            if (setGroups == -1)
                return -1;
            else
                res += setGroups;
        }
        return res;
    }
};