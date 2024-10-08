//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
		long long int PowMod(long long int x,long long int n,long long int M)
		{
		    long long int ans  = 1; // ans as 1;
		    while (n>0)
		    {
		        if (n&1) //if odd
		        {
		            ans = (1LL * (ans%M * x%M))%M; // a * square
		        }
		      x = (x%M * x%M)%M;
		      n = n>>1;//for square 
		    }
		    
		    return ans;
		    
		}
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	long long int x, n, m;
    	cin >> x >> n >> m;
    	Solution ob;
    	long long int ans = ob.PowMod(x, n, m);
    	cout << ans <<"\n";
    }
	return 0;
}

// } Driver Code Ends