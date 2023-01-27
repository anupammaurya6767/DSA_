class Solution {
public:
    bool checkValidString(string sp) {
        stack<int>star,open;
        for(int i=0;i<sp.size();i++)
        {
           if(sp[i]=='(')
               open.push(i);
            else if(sp[i]=='*')
                star.push(i);
            else{
                if(!open.empty())
                    open.pop();
                else if(!star.empty())
                    star.pop();
                else
                    return false;
            }
                
        }
        
        while(!open.empty())
        {
            if(star.empty())
                return false;
            else if(star.top()>open.top())
            {
                star.pop();
                open.pop();
            }else
                return false;
                
        }
        
        return true;
    }
};