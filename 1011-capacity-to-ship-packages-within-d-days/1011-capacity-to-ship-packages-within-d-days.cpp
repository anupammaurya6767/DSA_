class Solution {
public:

    bool ispossible(vector<int>& wt, int mid , int days)
    {
        int d = 1;
        int sum = 0;
        for(auto x:wt)
        {
           sum += x;
           if(sum>mid)
           {
               d++;
               sum = x;
           }
        }

        return d<=days;
    }
    int shipWithinDays(vector<int>& wt, int days) {
        int max = -1;
        int sum = 0;
        for(auto i:wt)
        {
            if(i>max)
            max = i;
            sum += i;
        }

        if(days == wt.size())
        return max;

        int lo = max;
        int hi = sum;
        int ans= 0;
        while(lo<=hi)
        {
            int mid = lo+(hi-lo)/2;
            if(ispossible(wt,mid,days))
            {
                ans = mid;
                hi = mid-1;
            }else{
                lo = mid+1;
            }
        }

        return ans;
    }
};