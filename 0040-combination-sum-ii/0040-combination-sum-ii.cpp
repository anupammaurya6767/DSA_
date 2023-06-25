class Solution {
public:
    void solve(int ind, vector<int>&arr,int target,vector<int>&ds,vector<vector<int>>&ans)
    {
        int n = arr.size();
        if(target==0)
        {
            ans.push_back(ds);
            return;
        }
        
        for(int i=ind;i<n;i++)
        {
            if(i>ind && arr[i]==arr[i-1])continue;
            if(arr[i]>target)
                break;
            ds.push_back(arr[i]);
            solve(i+1,arr,target-arr[i],ds,ans);
            ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>ans;
        vector<int>ds;
        solve(0,candidates,target,ds,ans);
        
        return ans;
    }
};