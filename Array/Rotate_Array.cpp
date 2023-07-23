//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    
    //Function to rotate an array by d elements in counter-clockwise direction. 
    void rotateArr(int arr[], int d, int n){
        int arr_temp[n];
        for (int i=0;i<n;i++)
        {
            arr_temp[i] = arr[(i+d) % n];    // 0 (arr_temp) <- 2 (arr) , 1 -< 3 , 2 <- 4, 3 <- 0, 4 <- 1  
        }
        for(int i=0;i<n;i++)
        {
        arr[i] = arr_temp[i]; //copying from arr_temp to arr[i];
        }
    }
};
 
//{ Driver Code Starts.

int main() {
	int t;
	//taking testcases
	cin >> t;
	
	while(t--){
	    int n, d;
	    
	    //input n and d
	    cin >> n >> d;
	    
	    int arr[n];
	    
	    //inserting elements in the array
	    for(int i = 0; i < n; i++){
	        cin >> arr[i];
	    }
	    Solution ob;
	    //calling rotateArr() function
	    ob.rotateArr(arr, d,n);
	    
	    //printing the elements of the array
	    for(int i =0;i<n;i++){
	        cout << arr[i] << " ";
	    }
	    cout << endl;
	}
	return 0;
}
// } Driver Code Ends