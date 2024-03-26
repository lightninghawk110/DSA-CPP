//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        
        int c = 0, el= a[0];

	for(int i=0;i<size;i++)
	{
		if(c==0)
		{
			el = a[i];
			c=1;
		}
		else if(el==a[i])
		{
			c++;
		}
		else{
			c--;
		}
	}
	int c2=0;
	for(int i=0;i<size;i++)
	{
		if(a[i]==el){
			c2++;
		}
	}
	if(c2 > (size/2))
	{
		return el;
	}
	else{
	    return -1;
	}
        
    }
};

//{ Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}

// } Driver Code Ends