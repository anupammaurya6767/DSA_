//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
void heapify(vector<int>&v, int n, int i)
{
    int left = 2*i+1;
    int right = 2*i+2;
    int la = i;
    if(left<n && v[left]>v[la])
    la = left;
    
    if(right<n && v[right]>v[la])
    la = right;
    
    if(la!=i)
    {
        swap(v[i],v[la]);
        heapify(v,n,la);
    }
}
    void convertMinToMaxHeap(vector<int> &arr, int N){
      for( int i = (N/2)-1;i>=0;i--)
      heapify(arr,N,i);
    }
    
};


//{ Driver Code Starts.
int main(){
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while(t--){
        //Input

       int n; cin >> n;
       vector<int> vec(n);
       for(int i = 0;i<n;i++) cin >> vec[i];

        Solution obj;
        obj.convertMinToMaxHeap(vec,n);
        for(int i = 0;i<n;i++) cout << vec[i] << " ";
        cout << endl;
        

        
        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends