class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int lo = 0;
        int hi = arr.size()-1;
        while(lo<=hi)
        {
            int mid = (lo+hi)/2;
            if((arr[mid]-(mid+1))<k)
            lo = mid+1;
            else
            hi = mid-1;
        }

        return lo+k;
    }
};