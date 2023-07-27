class Solution {
public:
    int maxDepth(string s) {
        int maxi = 0;
        int count = 0;
        for(auto it:s)
        {
            if(it=='(')
            {
                count++;
                maxi = max(count,maxi);
            }else if(it==')')
                count--;
        }
        
        return maxi;
    }
};