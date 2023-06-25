//! Write a program to find total number of occurence of an element using binary search
#include <iostream>
using namespace std;

int firstOcrr(int arr[], int n, int x)
    {
        int s = 0, e = n - 1, ans = -1;
        int mid = (s + e) / 2;
        while (s <= e)
        {
            if (arr[mid] == x)
            {
                ans = mid;
                e = mid - 1;
            }
            else if (arr[mid] < x)
            {
                s = mid + 1;
            }
            else if (arr[mid] > x)
            {
                e = mid - 1;
            }

            mid = (s + e) / 2;
        }
        return ans;
    }

    int lastOcrr(int arr[], int n, int x)
    {
        int s = 0, e = n - 1, ans = -1;
        int mid = (s + e) / 2;
        while (s <= e)
        {
            if (arr[mid] == x)
            {
                ans = mid;
                s = mid + 1;
            }
            else if (arr[mid] < x)
            {
                s = mid + 1;
            }
            else if (arr[mid] > x)
            {
                e = mid - 1;
            }

            mid = (s + e) / 2;
        }
        return ans;
    }


int find(int arr[], int n, int x)
{ 
    int count = 0;
    int p,q;
    p = firstOcrr(arr, n, x);
    q = lastOcrr(arr, n, x);
    if ( p == -1 && q == -1)
    {
        return 0;
    }
    else{
        
        count = (q-p) + 1; 
        return count;

    }
}
int main()
{
    int arr[10];
    int key,size=5;
    cout << " Enter elements in array:" << endl;
    for(int i = 0; i < 5 ; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter key:" << endl;
    cin >> key;
    cout << "occurence is :" << find(arr,size,key);
}