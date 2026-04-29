#include <bits/stdc++.h>
using namespace std;

// functional recursion

int f(int n)
{
    if (n == 0)
    {
        return 0;
    }

    return n + f(n - 1); // returning n + calling f( n-1)
}

int main()
{
    int n;

    cin >> n;
    cout << f(n); // calling f(n) and printing the result

    return 0;
}