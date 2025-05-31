#include <bits/stdc++.h>
using namespace std;

void bachgold(int n)
{
    int k = n / 2;
    cout << k << endl;
    for (int i = 0; i < k - n % 2; ++i)
    {
        cout << "2 ";
    }
    if (n % 2 == 1)
    {
        cout << "3 ";
    }
    cout << endl;
    return;
}

int main()
{
    int n;
    cin >> n;
    if (n < 2 || n > 1000000)
    {
        cout << "Invalid input. n should be between 2 and 1000000." << endl;
        return 1; // Exit with an error code
    }
    bachgold(n);

    return 0;
}