class Solution {
public:
    
    void solve(int col, vector<vector<string>>&ans,vector<string>&ds,int n,vector<int>&check,vector<int>&upper,vector<int>&lower)
    {
        if(col==n)
        {
            ans.push_back(ds);
            return;
        }
        
        for(int row = 0;row<n;row++)
        {
            if(check[row]==0 && upper[(n-1)+(col-row)]==0 && lower[row+col]==0)
            {
                check[row]=1;
                upper[(n-1)+(col-row)]=1;
                lower[row+col]=1;
                ds[row][col] = 'Q';
                solve(col+1,ans,ds,n,check,upper,lower);
                check[row]=0;
                upper[(n-1)+(col-row)]=0;
                lower[row+col]=0;
                ds[row][col] = '.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>ds(n);
        string s(n,'.');
        for(int i=0;i<n;i++)
        {
            ds[i] = s;
        }
        
        vector<int>check(n,0);
        vector<int>upper(2*n-1,0);
        vector<int>lower(2*n-1,0);
        
        solve(0,ans,ds,n,check,upper,lower);
        
        return ans;
    }
};