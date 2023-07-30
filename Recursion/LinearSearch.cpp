#include <bits/stdc++.h>
using namespace std;

bool LinearSearch( int *arr, int size, int k )
{
     if ( size == 0 ) // base case
     {
        return false;
     }
     if (arr[0] ==k) // first element is our searching element
     {
        return true;
     }
     else
     {
       bool rem = LinearSearch(arr+1,size-1,k); // passing remaining element one by one in recursive manner
       return rem;
     }
     
     
}

int main()

{
    int arr[5] = { 55,3,1,5,78};
    int s = 0;
    int n = 5;
    int k = 5;
    if (LinearSearch(arr,n,k))
    {
        cout << "Element Found" << endl;
    }
    else
    {
        cout << " not found" << endl;
    }
    
}
