class Solution {
public:
    bool canJump(vector<int>& a) {
         int reach = 0;
        for(int i=0;i<a.size();i++)
        {
            if(reach<i)
                return false;
            reach = max(reach,i+a[i]);
        }
        
        return true;
    }
};