//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    struct meeting{
        int start;
        int end;
        int pos;
    };
    
    bool static comp(struct meeting a, meeting b)
    {
        if(a.end<b.end)
        return true;
        else if(a.end>b.end)
        return false;
        else if(a.pos<b.pos)
        return true;
        
        return false;
    }
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        struct meeting meeting[n];
        for(int i=0;i<n;i++)
        {
            meeting[i].start = start[i];
            meeting[i].end = end[i];
            meeting[i].pos = i+1;
        }
        
        
        sort(meeting,meeting+n,comp);
        
        int ans = 1;
        int limit = meeting[0].end;
        
        for(int i=1;i<n;i++)
        {
            if(meeting[i].start>limit)
            {
             ans++;
             limit = meeting[i].end;
            }
        }
        
        
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends