//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution {
  public:


int binarysearch(int arr[], int s,int e, int k)// pass array, size, and key as parameter
{
    int start, end, mid; //define start, end and mid as int
    start = s;// starts from index 0
    end = e; // ends from size - 1 
    while (start <= end) // while start is less than, equals to end repeat ->
    {
        mid = (start + end)/2; // 1. FIND MID POINT
        if (arr[mid] == k) // CHECK IF MID == KEY
        {
            return mid;  // here we have to return MID. 
        }
        if (arr[mid] < k) //  2. IF MID IS SMALLER 
        {
            start = mid + 1; // SET STARTING POINT AS POSITION AFTER MID I.E MID + 1
        }
        if (arr[mid] > k) //  3. IF MID IS GREATER 
        {
            end = mid - 1; // SET END POINT AS POSITION BEFORE MID I.E MID - 1
        }
        
    }
    return -1; // NOT FOUND SO RETURN 0
}


    string isKSortedArray(int arr[], int n, int k)
    {
        int arr2[n];
        for (int i = 0; i < n; i++)
        {
            arr2[i] = arr[i];
        }
        sort(arr2,arr2+n);
        int elem,ans;
        int s = 0;
        int e = n-1;
        for (int i = 0; i < n; i++)
        {
            elem  = arr[i];
            ans = binarysearch(arr2,s,e,elem);
            if (k < abs(i - ans))
            {
                return "No";
            }
        }
        return "Yes";

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
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    cin>>k;
	    Solution ob;
	cout <<ob.isKSortedArray(arr, n, k)<<endl;
	}
	return 0;	 
}
// } Driver Code Ends