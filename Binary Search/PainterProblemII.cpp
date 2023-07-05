//{ Driver Code Starts
// driver code

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++


  bool isPossible(int arr[], int n, int k, long long int mid){
    long long int arrSum = 0;
    long long int count = 1;
    for (long long int i = 0; i < n; i++)
    {
        if (arrSum + arr[i] <= mid)
        {
            arrSum += arr[i];
        }
        else
        {
            arrSum = arr[i];
            count++;
            if (count > k || arr[i] > mid)
            {
                return false;
            }
        }
        if (count > k)
        {
            return false;
        }
    }
    return true;
    }
    
    long long minTime(int arr[], int n, int k)
    {
        long long int ans = -1;
        long long int s = 0;
        long long int mid, tempsum=0;
        for (int i = 0; i < n; i++)
        {
            tempsum += arr[i];
        }
        long long int e = tempsum;
        mid = s + (e - s)/2;
        while (s <= e)
        {
            if (isPossible(arr, n, k, mid))
            {
                ans = mid;
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
            mid = s + (e - s) / 2;
        }
        return ans;
    }

int main()
{
    int n = 5;
    int k = 3;
    int arr[5] = {5, 10, 30, 20, 15};

    cout << minTime(arr, n, k);
    return 0;
}
// } Driver Code Ends