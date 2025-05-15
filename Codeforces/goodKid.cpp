#include <bits/stdc++.h>
using namespace std;

void goodKid(int arr[], int n)
{

    int product = 1;
    int count = 0;
    int min = INT_MAX;

    min = *min_element(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == min && count < 1)
        {
            arr[i]++;
            count++;
        };
        product *= arr[i];
    }

    printf("%d\n", product);
    return;
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

        goodKid(arr, n);
    }
    return 0;
}
