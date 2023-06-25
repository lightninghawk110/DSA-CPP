//!Write a Program to find first And last occurrences of element using binary search. 
#include <iostream>
#include <vector>
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


vector<int> find(int arr[], int n, int x)
{ 
    vector<int> a;
    int p,q;
    p = firstOcrr(arr, n, x);
    q = lastOcrr(arr, n, x);
    

    return a;
}

int main()
{
    int arr[10];
    int key,size=5;
    vector<int> z;
    cout << " Enter elements in array:" << endl;
    for(int i = 0; i < 5 ; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter key:" << endl;
    cin >> key;
    z = find(arr,size,key);
    cout << "value:" << endl;
    for(int i=0; i < z.size(); i++)
    {
        cout << z[i] << endl;
    }
}