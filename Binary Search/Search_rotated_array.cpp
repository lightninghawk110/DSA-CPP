#include <iostream>
using namespace std;

int binarysearch(int arr[], int s, int e, int k) // pass array, size, and key as parameter
{
    int start, end, mid; // define start, end and mid as int
    start = s;           // starts from index 0
    end = e;             // ends from size - 1
    while (start <= end) // while start is less than, equals to end repeat ->
    {
        mid = (start + end) / 2; // 1. FIND MID POINT
        if (arr[mid] == k)       // CHECK IF MID == KEY
        {
            return mid; // here we have to return MID.
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

int findPivot(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    int mid = (s + e) / 2;
    while (s < e)
    {
        if (arr[mid] >= arr[s])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = (s + e) / 2;
    }
    return e;
}

int search(int A[], int l, int h, int key)
{
    int pindex = findPivot(A, h+1);
    if (A[pindex] <= key && A[h] >= key)
    {
        return binarysearch(A, pindex, h, key);
    }
    else
    {
        return binarysearch(A, 0, pindex - 1, key);
    }
}

int main()
{
    int res;
    int n = 2;
    int arr[] = {3, 1};
    res = search(arr, 0, n - 1, 1);
    cout << "elemnt found at :" << res;
}