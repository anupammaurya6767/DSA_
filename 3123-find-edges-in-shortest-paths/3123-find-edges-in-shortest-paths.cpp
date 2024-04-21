class Solution {
public:
    vector<bool> findAnswer(int n, vector<vector<int>>& grid) {
        vector<vector<pair<int,int>>>g(n);
        for(const auto& e:grid){
            int u = e[0], v = e[1], w= e[2];
            g[u].emplace_back(v,w);
            g[v].emplace_back(u,w);
        
        
        }
        int m = grid.size();
        vector<bool>result(m,false);
        
        auto dijkstra = [&](int start){
            vector<int>distance(n,INT_MAX);
            distance[start] = 0;
            
            priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>prioty;
            prioty.emplace(0,start);
            
            while(!prioty.empty()){
                auto [d,u] = prioty.top();
                prioty.pop();
                if(d>distance[u]){
                    continue;
                }
                
                for(const auto& [v,w]:g[u]){
                    if(distance[u] +w <distance[v]){
                        distance[v] = distance[u]+w;
                        prioty.emplace(distance[v],v);
                    }
                }
            }
            return distance;
        };
        
        vector<int>fdistance = dijkstra(0);
        if(fdistance[n-1] == INT_MAX){
            return result;
        }
        
        vector<int>rdistance = dijkstra(n-1);
        for(int i=0;i<m;i++){
            int u = grid[i][0] , v = grid[i][1], w = grid[i][2];
            if(fdistance[u]+ w + rdistance[v]== fdistance[n-1] || fdistance[v]+w+rdistance[u]==fdistance[n-1]){
                result[i] = true;
            }
        }
        return result;
    }
};