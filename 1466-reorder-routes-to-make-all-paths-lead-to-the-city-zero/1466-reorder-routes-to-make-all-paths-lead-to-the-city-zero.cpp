class Solution {
public:
    vector<vector<int>> adjList;
    vector<vector<int>> dirList;
    int count = 0;
    vector<bool> visited;
    int minReorder(int n, vector<vector<int>>& connections) {
        adjList.resize(n);
        dirList.resize(n);
        visited.resize(n);
        fill(visited.begin(), visited.end(), false);
        /*
        for (int i = 0; i < connections.size(); ++i) {
            cout << i << ": ";
            for (auto j : connections[i]) {
                cout << j << ' ';
            }
            cout << '\n';
        }
        */
        for (int i = 0; i < connections.size(); ++i) {
                int fromNode = connections[i][0];
                int targetNode = connections[i][1];
                adjList[fromNode].push_back(targetNode);
                adjList[targetNode].push_back(fromNode);
                dirList[fromNode].push_back(targetNode);
        }
        visited[0] = true;
        traverse(0, connections);
        return count;
    }
    
    void traverse(int node, vector<vector<int>>& connections) {
        for (int i = 0; i < adjList[node].size(); ++i) {
            int target = adjList[node][i];
            if (!visited[target]) {
                //visit the next node
                for (auto j : dirList[node]) {
                    if (j == target) {
                        count++;
                        cout << node << ' ' << target << '\n';
                    }
                }
                visited[target] = true;
                traverse(target, connections);
            }
        }
    }
};



/*

4 <- 3 -> 2 <- 1 -> 0 
*/