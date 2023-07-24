class Solution {
public:
    string longestPalindrome(string str) {
        int start = 0;
        int n = str.size();
        int end = 1;
          for(int i=0;i<n;i++)
          {
              int l = i-1;
              int r = i;
              while(l>=0&&r<n&&str[l]==str[r])
              {
                  if(r-l+1>end)
                  {
                      start = l;
                      end = r-l+1;
                  }
                  
                  l--;r++;
              }
              
              
              l = i-1;
              r = i+1;
              while(l>=0&&r<n&&str[l]==str[r])
              {
                  if(r-l+1>end)
                  {
                      start = l;
                      end = r-l+1;
                  }
                  
                  l--;r++;
              }
          }
        
        return str.substr(start,end);
    }
};