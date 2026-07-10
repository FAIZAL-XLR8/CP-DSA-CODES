class Solution
{

public:
    void dfsGraph(int currNode, vector<int> &v, vector<vector<int>> &adj, vector<bool> &isVisited)
    {
        v.push_back(currNode);
        isVisited[currNode] = true;
        for (auto it : adj[currNode])
        {
            if (!isVisited[it])
            {
                dfsGraph(it, v, adj, isVisited);
            }
        }
    }
    vector<int> dfs(vector<vector<int>> &adj)
    {
        // Code here
        int nodes = adj.size();
        int currNode = 0;
        vector<int> v;
        vector<bool> isVisited(nodes, false);
        dfsGraph(currNode, v, adj, isVisited);

        return v;
    }
};