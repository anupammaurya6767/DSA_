class Solution {
public:
    void solve(vector<vector<int>>&ans,vector<int>&ds,vector<int>&freq,vector<int>&arr)
    {
        if(ds.size()==arr.size())
        {
            ans.push_back(ds);
            return;
        }
        
        for(int i=0;i<arr.size();i++)
        {
            if(!freq[i])
            {
                ds.push_back(arr[i]);
                freq[i]=1;
                solve(ans,ds,freq,arr);
                freq[i]=0;
                ds.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int>ds;
        vector<vector<int>>ans;
        vector<int>freq(nums.size(),0);
        solve(ans,ds,freq,nums);
        return ans;
    }
};