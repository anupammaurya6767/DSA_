//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    bool check(int src,int parent, vector<int>adj[],int vis[])
    {
        vis[src] = 1;
            for(auto x:adj[src])
            {
                if(!vis[x])
                {
                    vis[x] = 1;
                    if(check(x,src,adj,vis))
                    return true;
                }
                else if(parent!=x)
                return true;
            }

       
        return false;
    }
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        int vis[V] = {0};
        for(int i=0;i<V;i++)
        {
            if(!vis[i])
            {
                if(check(i,-1,adj,vis))
                return true;
            }
        }
        
        return false;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}
// } Driver Code Ends