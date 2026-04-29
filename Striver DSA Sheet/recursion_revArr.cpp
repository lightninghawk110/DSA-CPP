#include <bits/stdc++.h>
using namespace std;

void f(int l, int r)
{
    if (l >= r)
        return;
    swap(l, r);
    f(l + 1, r - 1);
}

void func(int i, int arr[], int n)
{
    if (i >= n / 2)
        return;
    swap(arr[i], arr[n - i - 1]);
    func(i + 1, arr, n);
}

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    func(0, arr, n);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
