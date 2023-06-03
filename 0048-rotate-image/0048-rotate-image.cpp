class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
      int n = matrix.size();
        // first take transpose of the matrix (swap elements along diagonal)
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        
        // reverse each row
        
        for(int i=0;i<n;i++)
            reverse(matrix[i].begin(),matrix[i].end());
    }
};