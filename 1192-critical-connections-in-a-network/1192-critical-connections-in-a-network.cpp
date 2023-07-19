class Solution {
    int timer = 0;
public:
    void dfs(int i, int parent,vector<int>adj[],vector<int>&vis,vector<vector<int>>&bridges,int tin[], int low[])
    {
        vis[i]=1;
        low[i] = tin[i] = timer;
        timer++;
        
        for(auto it:adj[i])
        {
            if(it==parent)continue;
            if(!vis[it])
            {
                dfs(it,i,adj,vis,bridges,tin,low);
                low[i] = min(low[i],low[it]);
                
                if(low[it]>tin[i])
                {
                    bridges.push_back({it,i});
                }
            }else{
                low[i] = min(low[i],low[it]);
            }
        }
    }
    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
        vector<int>vis(n,0);
        vector<int>adj[n];
        for(auto it:connections)
        {
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        
        int tin[n];
        int low[n];
        vector<vector<int>>bridges;
        dfs(0,-1,adj,vis,bridges,tin,low);
        
        return bridges;
    }
};