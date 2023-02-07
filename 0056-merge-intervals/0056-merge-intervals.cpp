class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>merged;
        vector<int>temp = intervals[0];
        for(auto i:intervals)
        {
            if(i[0]<=temp[1])
            {
                temp[1] = max(temp[1],i[1]);
            }else{
                merged.push_back(temp);
                temp = i;
            }
        }
        
        merged.push_back(temp);
        return merged;
    }
};