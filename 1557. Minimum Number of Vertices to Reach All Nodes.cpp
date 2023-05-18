**********Code1 (Using Indegree)**************
class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) 
    {
        vector<int> indegree(n,0);
        vector<int> ans;

        for(auto i:edges)
        {
            indegree[i[1]]++;
        } 

        for(int i=0;i<n;i++)
        {
            if(indegree[i]==0) ans.push_back(i);
        }

        return ans;
           
    }
};






***********Code2 (Using Unordered_set)**************

class Solution {
public:
    void dfs(vector<int> adj[], int node,vector<int>&vis, unordered_set<int>&ans)
    {
        vis[node]=1;

        for(auto i:adj[node])
        {
            if(ans.find(i)!=ans.end()) ans.erase(i);
            
            if(!vis[i])
            {
                dfs(adj,i,vis,ans);
            }
        }
    }

    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) 
    {
        vector<int> adj[n];
        for(auto i:edges)
        {
            int u=i[0];
            int v=i[1];
            adj[u].push_back(v);
        }    

        vector<int> vis(n,0);
        unordered_set<int> ans;

        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            {
                ans.insert(i);
                dfs(adj,i,vis, ans);
            }
        }

        vector<int> sol;
        for(auto i:ans) sol.push_back(i);
        return sol;

    }
};
