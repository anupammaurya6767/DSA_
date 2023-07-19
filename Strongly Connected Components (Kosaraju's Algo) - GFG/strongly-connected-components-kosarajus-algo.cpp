//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    void dfs(int i,vector<int>&vis, vector<vector<int>>& adj,stack<int>&st)
    {
        vis[i] =1;
        for(auto it:adj[i])
        {
            if(!vis[it])
            {
                dfs(it,vis,adj,st);
            }
        }
        
        st.push(i);
    }
    
    void dfs3(int i,vector<int>&vis, vector<int>adjt[])
    {
        vis[i] =1;
        for(auto it:adjt[i])
        {
            if(!vis[it])
            {
                dfs3(it,vis,adjt);
            }
        }
    }
	public:
	//Function to find number of strongly connected components in the graph.
    int kosaraju(int V, vector<vector<int>>& adj)
    {
        //code here
        vector<int>vis(V,0);
        stack<int>st;
        for(int i=0;i<V;i++)
        {
            if(!vis[i])
            {
                dfs(i,vis,adj,st);
            }
        }
        
        vector<int>adjt[V];
        
        for(int i=0;i<V;i++)
        {
            vis[i] =0;
            for(auto it:adj[i])
        {
            
            adjt[it].push_back(i);
        }
        }
        
        int ans =0;
      while(!st.empty())
          {
              int i = st.top();
              st.pop();
          
            if(!vis[i])
            {
                ans++;
                dfs3(i,vis,adjt);
            }
        }
        
        return ans;
    }
};

//{ Driver Code Starts.


int main()
{
    
    int t;
    cin >> t;
    while(t--)
    {
    	int V, E;
    	cin >> V >> E;

    	vector<vector<int>> adj(V);

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    	}

    	Solution obj;
    	cout << obj.kosaraju(V, adj) << "\n";
    }

    return 0;
}


// } Driver Code Ends