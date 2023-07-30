#include <bits/stdc++.h>
using namespace std;

bool binarySearch( int *arr, int s, int e, int k )
{
     if ( s > e ) // base case
     {
        return false;
     }
     int mid  = s + (e-s)/2;
     if (arr[mid] ==k) // first element is our searching element
     {
        return true;
     }
     if (arr[mid] < k)
     {
        binarySearch(arr,mid+1,e,k); 
     }
     else
     {
        binarySearch(arr,s,mid-1,k); 
     }   
}

int main()

{
    int arr[5] = { 55,3,1,5,78};
    int n = 5;
    int s = 0;
    int e = n-1;
    int k = 2;
    if (binarySearch(arr,s,e,k))
    {
        cout << "Element Found" << endl;
    }
    else
    {
        cout << " not found" << endl;
    }
    
}
