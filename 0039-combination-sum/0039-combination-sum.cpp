class Solution {
public:
    void solve(int i,vector<int>& candidates,vector<int>&ds, int target,vector<vector<int>>&ans)
    {
        if(i==candidates.size())
        {
            if(target==0)
            {
                ans.push_back(ds);
            }
            
            return;
        }
        
        if(target>=candidates[i])
        {
            ds.push_back(candidates[i]);
            solve(i,candidates,ds,target-candidates[i],ans);
            ds.pop_back();
        }
        
       solve(i+1,candidates,ds,target,ans);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>ds;
        solve(0,candidates,ds,target,ans);
        
        return ans;
    }
};