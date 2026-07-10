class Solution
{
public:
    vector<int> TopoSort(vector<int> adj[], vector<int> &indegree, vector<int> &ans,
                         unordered_set<int> &s)
    {
        queue<int> q;
        for (int i = 0; i < 26; ++i)
        {
            if (indegree[i] == 0 and s.find(i) != s.end())
                q.push(i);
        }

        while (!q.empty())
        {
            int curr = q.front();
            q.pop();
            ans.push_back(curr);
            for (auto neighbour : adj[curr])
            {
                indegree[neighbour]--;
                if (indegree[neighbour] == 0)
                    q.push(neighbour);
            }
        }
        return ans;
    }
    string findOrder(vector<string> &words)
    {
        // code here

        vector<int> adj[26];
        vector<int> indegree(26, 0);
        unordered_set<int> s;
        for (const auto &word : words)
        {
            for (char c : word)
            {
                s.insert(c - 'a');
            }
        }
        for (int i = 0; i < words.size() - 1; ++i)
        {
            string s1 = words[i];
            string s2 = words[i + 1];
            int minLen = min(s1.size(), s2.size());
            bool flag = true;

            // populating set and adjacency list

            for (int j = 0; j < minLen; ++j)
            {

                if (s1[j] != s2[j])
                {
                    adj[s1[j] - 'a'].push_back(s2[j] - 'a');
                    indegree[(s2[j] - 'a')]++;
                    flag = false;
                    break;
                }
            }
            if (s1.size() > s2.size() and flag == true)
                return "";
        }

        vector<int> ans;
        string topo = "";
        TopoSort(adj, indegree, ans, s);
        if (ans.size() != s.size())
            return "";
        for (auto it : ans)
        {
            topo += (char)(it + 'a');
        }
        return topo;
    }
};