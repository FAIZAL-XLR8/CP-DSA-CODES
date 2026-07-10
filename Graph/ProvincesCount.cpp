// User function Template for C++

class Solution
{
public:
    void dfs(int currNode, vector<int> adjLs[], vector<bool> &isVisited)
    {
        isVisited[currNode] = true;
        for (auto it : adjLs[currNode])
        {
            if (!isVisited[it])
            {
                dfs(it, adjLs, isVisited);
            }
        }
    }
    int numProvinces(vector<vector<int>> adj, int V)
    {
        // code here
        int ctr = 0;
        vector<int> adjLs[V + 1];
        vector<bool> isVisited(V + 1, false);
        for (int i = 0; i < V; ++i)
        {

            for (int j = 0; j < V; ++j)
            {
                if (adj[i][j] == 1 && i != j)
                {
                    adjLs[i + 1].push_back(j + 1);
                    adjLs[j + 1].push_back(i + 1);
                }
            }
            // for (int j = i + 1; j < V; ++j) // se only above diagonals since undirected graph
            // //marks dono places if 1 --> 3 and also 3--> 1 so to avoid duplication in
            // //adjList we saw only elements above diag
            // {
            //     if(adj[i][j] == 1 )
            //     {
            //     adjLs[i + 1].push_back(j + 1);
            //     adjLs[j + 1].push_back(i + 1);
            //     }
            // }
        }
        for (int i = 1; i <= V; ++i)
        {
            if (!isVisited[i])
            {
                ctr++;
                dfs(i, adjLs, isVisited);
            }
        }
        return ctr;
    }
};