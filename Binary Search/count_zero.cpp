/* Here's My Solution ( Using Binary Search )  with O(log n) time Complexity :

Algo : 

1. Find mid

2. Check if Element at Mid is 0. If TRUE => a) store the mid index b) move end before mid  position, i.e end = mid -1; 

3. Else, if Element at Mid is greater than key (0) => move our start after mid because, it is given than zero(s) are in the last. So, all elemnt larger than mid would be at left side.

4. Else, if Element at mid is smaller than our key , again we require to move our end before mid.

5. Return -> Total element - the position of First Occurence of Zero. 

*/

//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

class Solution{   
public:
    int countZeroes(int arr[], int n) {
        int s= 0,key = 0,ans = -1;
        int e = n-1;
        int mid = s+(e-s)/2;
        while (s <= e)
        {
            if (arr[mid] == key)
            {
                ans = mid;
                e = mid -1;
            }
            else if (arr[mid]  > key)
            {
                s = mid +1;
            }
            else if (arr[mid] < key)
            {
                e = mid-1;
            }
        mid = s+(e-s)/2;
        }
        return n-ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.countZeroes(arr, n);
        cout << ans << "\n";
    }
    return 0;
}


// } Driver Code Ends