//! Write a program to find peak element in an array in form of mountain using binary search.


/* The function should return the index of any
   peak element present in the array */

// arr: input array
// n: size of array

class Solution
{
    public:
    int peakElement(int arr[], int n)
    {
       int s = 0, e = n-1;
       int mid = s + (e-s)/2;
       while (s<e)
       {
           if ( arr[mid] < arr[mid+1])
           {
               s = mid + 1;
           }
           else
           {
               e = mid;
           }
           mid = s + (e-s)/2;
       }
        return mid;
       
    }
};
