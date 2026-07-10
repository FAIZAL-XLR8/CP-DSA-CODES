class Solution
{
public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfs(vector<vector<int>> &adj)
    {
        // Code here
        int nodes = adj.size();
        vector<int> bfss;
        queue<int> q;
        vector<bool> isVisited(nodes, false);
        isVisited[0] = true;
        q.push(0);
        while (!q.empty())
        {
            int node = q.front();
            q.pop();
            bfss.push_back(node);

            // adjacency list pakado

            for (auto x : adj[node])
            {
                if (!isVisited[x])
                {
                    q.push(x); // pushing the neighbours
                    isVisited[x] = true;
                }
            }
        }
        return bfss;
    }
};