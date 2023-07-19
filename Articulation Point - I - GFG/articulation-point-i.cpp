//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
    int timer = 1;
  public:
    void dfs(int i, int parent,vector<int>adj[],vector<int>&vis,vector<int>&bridges,int tin[], int low[])
    {
        vis[i]=1;
        low[i] = tin[i] = timer;
        timer++;
        int child=0;
        for(auto it:adj[i])
        {
            if(it==parent)continue;
            if(!vis[it])
            {
                dfs(it,i,adj,vis,bridges,tin,low);
                low[i] = min(low[i],low[it]);
                
                if(low[it]>=tin[i] && parent!=-1)
                {
                   bridges[i]=1;
                }
                child++;
            }else{
                low[i] = min(low[i],tin[it]);
            }
        }
        
        if(child>1 && parent==-1)
        bridges[i] = 1;
    }
    vector<int> articulationPoints(int n, vector<int>adj[]) {
        
        vector<int>vis(n,0);
        
        int tin[n];
        int low[n];
        vector<int>bridges(n,0);
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            {
                dfs(i,-1,adj,vis,bridges,tin,low);
            }
        }
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            if(bridges[i]==1)
            ans.push_back(i);
        }
        
        if(ans.size()==0)
        return {-1};
        return ans;
        // Code here
    }
};

//{ Driver Code Starts.

int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		vector<int> ans = obj.articulationPoints(V, adj);
		for(auto i: ans)cout << i << " ";
		cout << "\n";
	}
	return 0;
}
// } Driver Code Ends