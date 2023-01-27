class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        unordered_map<int,int>m;
        for(auto x:bills)
        {
            if(x==5)
                m[5]++;
            else if(x==10)
            {
                if(m[5]>=1)
                {
                    m[10]++;
                    m[5]--;
                }else
                    return false;
            }else if(x==20)
            {
                if((m[10]>=1 && m[5]>=1))
                {
                    m[10]--;
                    m[5]--;
                    m[20]++;
                }else if(m[5]>=3)
                {
                    m[5]-=3;
                    m[20]++;
                }else
                    return false;
            }
        }
        
        
        return true;
    }
};