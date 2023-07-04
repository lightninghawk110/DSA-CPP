//{ Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template in C++

class Solution 
{
    public:
    //Function to find minimum number of pages.
    bool isPossible(int mid,int A[], int N, int M )
    {
        int PageSum = 0, StudentCount = 1; //starts with 1.
        for ( int i = 0; i<N;i++) // using inside loop
        {
        if((PageSum+A[i]) <= mid) // 10+20 (pages in array) < 50 (mid)
        {
            PageSum+=A[i];
        }
        else
        {
            StudentCount++; 
            if ( StudentCount > M || A[i] > mid) //if student count becomes greater than total no. of Student orr no. pf page in array greater than mid.
            {
                return false;
            }
         
            PageSum = A[i]; //reinitilize pagesum with next array[i]
        }
        if(StudentCount > M)// checking without inside else
        {
            return false;
        }
        
    }
    return true;
 }
    int findPages(int A[], int N, int M) 
    {
        int ans = -1; //storing answer as -1
        int start = 0,end,sum = 0, mid;
        for (int i = 0; i < N; i++)
        {
            sum+=A[i];
        }
        end = sum;
        mid = start+ (end-start)/2;
        if ( N < M)
        {
            return -1;
        }
        while (start<=end)
        {
            if( isPossible(mid,A,N,M))
            {
                ans = mid; //storing mid as answer 
                end = mid - 1; //moving end before mid
            }
            else
            {
                start = mid+1; //moving start after mid 
            }
         mid = start+ (end-start)/2;
        }
        return ans;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends