class Solution {
public:
    void solve(int ind,vector<vector<int>>&ans,vector<int>&arr)
    {
        if(ind==arr.size())
        {
            ans.push_back(arr);
            return;
        }
        
        for(int i=ind;i<arr.size();i++)
        {
            swap(arr[ind],arr[i]);
            solve(ind+1,ans,arr);
            swap(arr[ind],arr[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        solve(0,ans,nums);
        return ans;
    }
};