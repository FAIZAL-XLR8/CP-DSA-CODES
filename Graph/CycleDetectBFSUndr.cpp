class Solution
{
    // undirected graph
private:
    bool detect(int src, vector<bool> &isVisited, vector<int> edges[])
    {
        isVisited[src] = true;

        queue<pair<int, int>> q;

        q.push({src, -1});

        while (!q.empty())
        {
            int currNode = q.front().first;
            int parent = q.front().second;
            q.pop();
            for (auto neighbourNode : edges[currNode])
            {
                if (!isVisited[neighbourNode])
                {
                    q.push({neighbourNode, currNode});
                    isVisited[neighbourNode] = true;
                }
                else if (parent != neighbourNode)
                {
                    return true;
                }
            }
        }
        return false;
    }

public:
    bool isCycle(int V, vector<vector<int>> &edges)
    {
        // Code here
        vector<bool> isVisited(V, false);
        vector<int> adj[V];
        int m = edges.size();
        int n = edges[0].size();
        for (int i = 0; i < m; ++i)
        {
            int a = edges[i][0];
            int b = edges[i][1];
            adj[a].push_back(b);
            adj[b].push_back(a);
        }

        for (int i = 0; i < V; ++i)
        {
            if (!isVisited[i])
            {
                if (detect(i, isVisited, adj))
                    return true;
            }
        }
        return false;
    }
};