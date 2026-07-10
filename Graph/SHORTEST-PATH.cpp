// User function Template for C++
class Solution
{
public:
    void topoBFS(vector<bool> &isVisited, vector<pair<int, int>> adj[],
                 vector<int> &ans, vector<int> &indegree)
    {
        queue<int> q;
        for (int i = 0; i < indegree.size(); ++i)
        {
            if (indegree[i] == 0)
                q.push(i);
        }
        while (!q.empty())
        {
            int curr = q.front();
            q.pop();
            ans.push_back(curr);

            for (auto neighbour : adj[curr])
            {
                int v = neighbour.first;
                indegree[v]--;
                if (indegree[v] == 0)
                    q.push(v);
            }
        }
    }
    void topoDFS(int src, vector<bool> &isVisited, vector<pair<int, int>> adj[],
                 stack<int> &st)
    {
        isVisited[src] = true;

        for (auto neighbour : adj[src])
        {
            int v = neighbour.first;
            if (!isVisited[v])
            {
                topoDFS(v, isVisited, adj, st);
            }
        }
        st.push(src);
    }
    vector<int> shortestPath(int V, int E, vector<vector<int>> &edges)
    {
        // code here
        int src = 0;
        vector<int> ans;
        // stack <int> st;
        vector<bool> isVisited(V, false);
        vector<pair<int, int>> adj[V];
        vector<int> indegree(V, 0);

        for (auto &vec : edges)
        {
            int u = vec[0];
            int v = vec[1];
            int wt = vec[2];
            adj[u].push_back({v, wt});
            indegree[v]++;
        }
        // for (int i = 0; i < V; ++i)
        // {
        //     if(!isVisited[i])
        //     {
        //         topoDFS(i, isVisited, adj, st);
        //     }
        // }

        // vector<int> dist(V, INT_MAX);
        // dist[src] = 0;
        // while(!st.empty())
        // {
        //     int currNode = st.top();
        //     st.pop();
        //     if(dist[currNode] !=INT_MAX){ to stop the for loop for unreachable nodes or
        // doosre compenent ka part which is not connected to source
        //         for (auto neighbour : adj[currNode])
        //     {
        //         int v = neighbour.first;
        //         int wt = neighbour.second;
        //         if (dist[currNode] + wt < dist[v])
        //         {
        //             dist[v] = dist[currNode] + wt;
        //         }
        //     }
        //     }

        // }
        for (int i = 0; i < V; ++i)
        {
            if (!isVisited[i])
            {
                topoBFS(isVisited, adj, ans, indegree);
            }
        }
        vector<int> dist(V, INT_MAX);
        dist[src] = 0;
        for (int i = 0; i < V; ++i)
        {
            int curr = ans[i];
            if (dist[curr] != INT_MAX)
            {
                for (auto neighbour : adj[curr])
                {
                    int v = neighbour.first;
                    int wt = neighbour.second;
                    if (dist[curr] + wt < dist[v])
                    {
                        dist[v] = dist[curr] + wt;
                    }
                }
            }
        }
        for (int i = 0; i < V; ++i)
        {
            if (dist[i] == INT_MAX)
                dist[i] = -1;
        }
        return dist;
    }
};
