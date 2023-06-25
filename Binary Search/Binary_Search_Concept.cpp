//! Implement Binary Search

#include <iostream>
using namespace std;

int binarysearch(int arr[], int n, int k)// pass array, size, and key as parameter
{
    int start, end, mid; //define start, end and mid as int
    start = 0;// starts from index 0
    end = n - 1; // ends from size - 1 
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

int main()
{
    int arr1[5] = {1, 2, 3, 4, 5};
    int size = 5;
    int key = 4;
    int result = binarysearch(arr1, size, key);
    cout << "element found! at: " << result << endl;
    return 0;
}