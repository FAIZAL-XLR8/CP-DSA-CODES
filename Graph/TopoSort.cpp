class Solution
{
public:
    void dfs(int start, vector<bool> &isVisited, vector<int> adj[], stack<int> &st)
    {
        isVisited[start] = true;
        for (auto neighbour : adj[start])
        {
            if (!isVisited[neighbour])
                dfs(neighbour, isVisited, adj, st);
        }
        st.push(start);
    }
    vector<int> topoSort(int V, vector<vector<int>> &edges)
    {
        // code here
        vector<int> adj[V];
        for (auto vec : edges)
        {
            int u = vec[0];
            int v = vec[1];
            adj[u].push_back(v);
        }
        vector<bool> isVisited(V, false);
        stack<int> st;

        for (int i = 0; i < V; ++i)
        {
            if (!isVisited[i])
            {
                dfs(i, isVisited, adj, st);
            }
        }
        vector<int> ans;
        while (!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }
        return ans;
    }
};