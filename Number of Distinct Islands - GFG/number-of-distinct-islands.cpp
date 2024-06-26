//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
   void bfs(int row, int col,vector<vector<int>>&vis,vector<pair<int,int>>&vec,vector<vector<int>>&grid,
   int row0, int col0,int n, int m)
   {
       vis[row][col] = 1;
       vec.push_back({row-row0,col-col0});
       int di[] = {-1,0,1,0};
       int dj[] = {0,1,0,-1};
       
       for(int i=0;i<4;i++)
       {
           int nr = row+di[i];
           int nc = col + dj[i];
           if(nr>=0 && nc>=0 && nr<n && nc<m && !vis[nr][nc] && grid[nr][nc]==1)
         {
             bfs(nr,nc,vis,vec,grid,row0,col0,n,m);
         }
       }
   }
    int countDistinctIslands(vector<vector<int>>& grid) {
        // code here
        int n = grid.size();
        int m= grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        set<vector<pair<int,int>>>s;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(!vis[i][j]&&grid[i][j]==1)
                {
                    vector<pair<int,int>>vec;
                    bfs(i,j,vis,vec,grid,i,j,n,m);
                    s.insert(vec);
                }
            }
        }
        
        return s.size();
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        cout << obj.countDistinctIslands(grid) << endl;
    }
}
// } Driver Code Ends