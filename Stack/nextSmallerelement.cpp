//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	void immediateSmaller(vector<int>&arr, int n) {
	    stack<int> s;
	    s.push(arr[n-1]);// pushing last
	    arr[n-1]= -1;// making array last as -1
	    for(int i = n-2; i>=0;i--) // from second last to first
	    {
	        if(s.top()<arr[i]) // while element is smaller than stk top... i.e jb tk chota element na mile
	        {
	            int t = arr[i]; // temp store array element
	            arr[i] = s.top(); //storing stk element in array 
	            s.pop();// poping element from stack
	            s.push(t); // pushing bigger element in stack
	        }
	        else{
	            s.pop(); // popping from stack
	            s.push(arr[i]); //pushing array element
	            arr[i]= -1;
	        }
	    }
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, l, r;
        cin >> n;
        vector<int>arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.immediateSmaller(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends