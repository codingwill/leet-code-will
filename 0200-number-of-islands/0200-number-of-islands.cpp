/*
** Author: wkwkwill
** 22/05/2020 07:03 PM
*/

class Solution {
    
private:
    vector<char> node;
    vector<vector<int>> adj;
    int ans = 0;
    vector<int> visited;
    queue<int> q;

public:
    //breadth first search
    void bfs(int i)
    {
        if (q.empty()) 
        {
            ++ans;
            //cout << i << endl;
        }
        if (!q.empty()) q.pop();
        if (adj[i].size() != 0)
        {
            
            for (int j = 0; j < adj[i].size(); ++j)
            {
                if (!visited[adj[i][j]])
                {
                    q.push(adj[i][j]);
                    visited[adj[i][j]] = true;
                }
            }
            if (!q.empty()) bfs(q.front());
        }
    }

    //graph construction (adjacency matrix)
    void makeGraph(vector<vector<char>>& a)
    {
        int n = a[0].size();
        for (int i = 0; i < a.size(); ++i)
        {
            int index = i * n;
            for (int j = 0; j < a[i].size(); ++j)
            {
                node.push_back(a[i][j]);
                //atas
                if (i > 0)
                {
                    if (a[i-1][j] == '1')
                    {
                        adj[index + j].push_back(index - n + j);
                    }
                }
                //kanan
                if (j < a[i].size()-1)
                {
                    if (a[i][j+1] == '1')
                    {
                        adj[index + j].push_back(index + j + 1);
                    }
                }
                //bawah
                if (i < a.size()-1)
                {
                    if (a[i+1][j] == '1')
                    {
                        adj[index + j].push_back(index + n + j);
                    }
                }
                //kiri
                if (j > 0)
                {
                    if (a[i][j-1] == '1')
                    {
                        adj[index + j].push_back(index + j - 1);
                    }
                }
            }
        }
    }

    int numIslands(vector<vector<char>>& grid) 
    {
        if (grid.empty()) return {};
        //variable initialization
        visited.resize(grid.size()*grid[0].size() + 5);
        adj.resize(grid.size()*grid[0].size() + 5);
        makeGraph(grid);
        /*
        cout << "node = {adj. nodes}\n";
        for (int i = 0; i < adj.size(); ++i)
        {
            cout << "Node [" << i+1 << "] = {";
            for (int j = 0; j < adj[i].size(); ++j)
            {
                cout << adj[i][j]+1;
                if (j < adj[i].size()-1) cout << ", ";
            }
            cout << "}\n";
        }
        */
        for (int i = 0; i < node.size(); ++i)
        {
            if (visited[i]) continue;
            if (node[i] == '1')
            {
                visited[i] = true;
                bfs(i);
            }
        }
        return ans;
    }
};