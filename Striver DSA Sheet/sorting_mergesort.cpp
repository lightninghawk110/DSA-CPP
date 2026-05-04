#include <bits/stdc++.h>
using namespace std;

void mergeS(int arr[], int low, int mid, int high)
{
    vector<int> v;
    int left = low;
    int right = mid + 1;

    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            v.push_back(arr[left]);
            left++;
        }
        else
        {
            v.push_back(arr[right]);
            right++;
        }
    }

    while (left <= mid)
    {
        v.push_back(arr[left]);
        left++;
    }

    while (right <= high)
    {
        v.push_back(arr[right]);
        right++;
    }

    for (int i = low; i <= high; i++)
    {
        arr[i] = v[i - low]; // here, we need to access the elements of vector v from index 0, so we use i-low to get the correct index in vector v as low can be others in recursive calls.
    }
}
void mergeSort(int arr[], int low, int high)
{

    if (low >= high)
    {
        return;
    }

    int mid = (low + high) / 2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);
    mergeS(arr, low, mid, high);
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    mergeSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}