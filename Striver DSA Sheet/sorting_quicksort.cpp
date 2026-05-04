#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int low, int high)
{

    int i = low;
    int j = high;
    int pivot = arr[low];

    while (i < j)
    {

        while (arr[i] <= pivot && i <= high - 1)
        {
            i++;
        }
        while (arr[j] > pivot && j >= low + 1)
        {

            j--;
        }

        if (i < j)
        {
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[low], arr[j]);

    return j;
}

void qs(int arr[], int low, int high)
{

    if (low < high)
    {

        int pindex = partition(arr, low, high);
        qs(arr, low, pindex - 1);
        qs(arr, pindex + 1, high);
    }
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

    qs(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}