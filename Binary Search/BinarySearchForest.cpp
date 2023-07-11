//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    
    int isPossible(int tree[], int n,int mid)
    {
        int sum=0;
        for ( int i = 0; i < n; i++)
        {
            if ( tree[i] > mid )
            {
                sum+= (tree[i]-mid);
            }
            
        }
        return sum;
    }
    int find_height(int tree[], int n, int k)
    {
        int s = 0,e;
        sort(tree,tree + n);
        e = tree[n-1];
        int mid = s + (e-s)/2;
        while ( s <= e)
        {
            if (isPossible(tree,n,mid) == k)
            {
                return mid;
            }
            else if (isPossible(tree,n,mid) > k )
            {
                s = mid+1;
            }
            else
            {
                e = mid-1;
            }
            mid = s+(e-s)/2;
        }
        return -1;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n;

        int tree[n];
        for(int i=0; i<n; i++)
            cin>>tree[i];
        cin>>k;
        Solution ob;
        cout<< ob.find_height(tree,n,k) << endl;
    }
    return 1;
}
// } Driver Code Ends