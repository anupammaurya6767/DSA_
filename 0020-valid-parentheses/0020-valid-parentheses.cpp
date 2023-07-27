class Solution {
public:
    bool isValid(string s) {
        stack<int>st;
        for(auto it:s)
        {
            if(it=='(' || it=='{'|| it=='[')
                st.push(it);
            else if(it==')')
            {
                if(st.empty())
                    return false;
                else
                {
                    if(st.top()=='(')
                        st.pop();
                    else
                        return false;
                }
            }
               
            else if(it==']')
            {
                if(st.empty())
                    return false;
                else
                {
                    if(st.top()=='[')
                        st.pop();
                    else
                        return false;
                }
            }
            else if(it=='}')
            {
                if(st.empty())
                    return false;
                else
                {
                    if(st.top()=='{')
                        st.pop();
                    else
                        return false;
                }
            }
        }
        
        return st.size()==0;
    }
};