class Solution {
public:
    int jump(vector<int>& nums) {
        int last = 0, maxreach = 0, jump = 0;
        int i=0;
        int n = nums.size();
        while(i<n-1)
        {
            maxreach = max(maxreach,i+nums[i]);
            
            if(i==last)
            {
                last = maxreach;
                jump++;
            }
            
            i++;
        }
        
        return jump;
    }
};