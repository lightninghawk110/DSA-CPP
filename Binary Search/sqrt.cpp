//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

  

// } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
        long long int s,e,mid,mid_square,ans=-1;
        s = 0;
        e = x;
        while ( s<=e)
        {
            mid = s+ (e-s)/2;
            mid_square = mid*mid;
            if ( mid_square ==  x )
            {
                return mid;
            }
            if ( mid_square < x)
            {
                ans = mid;
                s = mid+ 1;
            }
            else
            {
                e = mid - 1;
            }
        }
        return floor(ans);
    }
};

//{ Driver Code Starts.

double morePrecision(int n, int precision, int tempSol) {
    
    double factor = 1;
    double ans = tempSol;

    for(int i=0; i<precision; i++) {
        factor = factor/10;

        for(double j=ans; j*j<n; j= j+factor ){
            ans = j;
        }
    }
    return ans;
}


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		Solution obj;
		cout << obj.floorSqrt(n) << endl;
	}
    return 0;   
}

// } Driver Code Ends