#include <bits/stdc++.h>
using namespace std;

int removeDup(vector<int> &arr, int n)
{
    int i = 0;
    for (int j = i + 1; j < n; j++)
    {
        if (arr[j] != arr[i])
        {
            arr[i + 1] = arr[j];
            i++;
        }
    }
    return i + 1;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << removeDup(arr, n) << endl;
}