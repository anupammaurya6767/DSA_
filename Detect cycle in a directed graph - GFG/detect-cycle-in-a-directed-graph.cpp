//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in a directed graph.
    bool bfs(int start,vector<int>&vis,vector<int>&path,vector<int> adj[]) {
        // code here
        vis[start] = 1;
        path[start]=1;
        
            for(auto it:adj[start])
            {
                if(!vis[it])
                {
                    if(bfs(it,vis,path,adj)==true)
                    return true;
                }else if(path[it])
                return true;
            }
            
            path[start] = 0;
        
        return false;
    }
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
        vector<int>vis(V,0);
        vector<int>path(V,0);
        for(int i=0;i<V;i++)
        {
            if(!vis[i])
            {
                if(bfs(i,vis,path,adj)==true)
                return true;
            }
        }
        
        return false;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}

// } Driver Code Ends