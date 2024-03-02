#include <bits/stdc++.h>
using namespace std;

vector<int> rotateArray(vector<int> arr, int k)
{
    int n = arr.size();
    k = k % n; // where d< n
    vector<int> temp(k);
    // storing starting array in temp
    for (int i = 0; i < k; i++)
    {
        temp[i] = arr[i];
    }
    // doing rotations
    for (int i = k; i < n; i++)
    {
        arr[i - k] = arr[i];
    }
    // adding element at back
    for (int i = n - k; i < n; i++)
    {
        arr[i] = temp[i - (n - k)];
    }

    return arr;
}

void rotateArrayRev(int arr [], int k, int n)
{
    if (n == 0)
        return;
    k = k % n;
    reverse(arr, arr + k);
    reverse( arr+k,arr+n);
    reverse(arr,arr+n);
}


int main()
{
    int n = 7;
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int d = 3;

    cout << "Before rotation:" << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    rotateArrayRev(arr, n, d);
    cout << "After rotation:" << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}