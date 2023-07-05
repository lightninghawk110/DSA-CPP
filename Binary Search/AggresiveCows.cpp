//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
public:
    bool isPossible(int n, int k, vector<int> &stalls, int mid)
    {
        int cowCount= 1, cowPosition = stalls[0]; //starting with cow count 1 and 1st position
        for ( int i = 0; i < stalls.size();i++) 
        {
            if(stalls[i]-cowPosition >= mid) // if cow2,cow3,cow4 (checking every cow postion with 1st cow position  Greater than MID position)
            
            {
                cowCount++;
                if (cowCount == k) // when all cows get their position
                {
                    return true; // for current mid the arrangement will be possible
                }
                cowPosition = stalls[i]; //changing 1st cow position 
            }
        }
        return false; // not possible for current mid
    }

    int solve(int n, int k, vector<int> &stalls) {
        sort(stalls.begin(),stalls.end());
        int s= 0,ans=-1;
        int e = stalls[n-1] - stalls[0];
        int mid = s + (e-s)/2;
        while ( s <= e)
        {
            if (isPossible(n,k,stalls,mid))
            {
                ans = mid;
                s =  mid+1;
            } 
            else {
                e = mid - 1 ;
            }
            mid = s + (e-s)/2;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input

        int n, k;
        cin >> n >> k;

        vector<int> stalls(n);
        for (int i = 0; i < n; i++) {
            cin >> stalls[i];
        }
        // char ch;
        // cin >> ch;

        Solution obj;
        cout << obj.solve(n, k, stalls) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends