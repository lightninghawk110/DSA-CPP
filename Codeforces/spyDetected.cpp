#include <bits/stdc++.h>
using namespace std;
int spyDetected(int arr[], int n)
{

    int val = 0;
    int sum = 0;
    int res = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    if (arr[0] != arr[1] && arr[0] != arr[2])
    {

        return 1;
    }
    else
    {
        val = sum - arr[0];

        for (int i = 1; i < n; i++)
        {
            if (sum - arr[i] == val)
            {
                continue;
            }
            else
            {
                res = i + 1;
                break;
            }
            res = i + 1;
        }
        return res;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        cout << spyDetected(arr, n) << endl;
    }
    return 0;
}