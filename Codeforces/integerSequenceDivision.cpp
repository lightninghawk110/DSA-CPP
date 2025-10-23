#include <bits/stdc++.h>
using namespace std;

// int main()
// {
//     long long n;
//     cin >> n;

//     // Total sum of 1..n
//     long long total = n * (n + 1) / 2;

//     // Minimum possible difference is 0 if sum is even, else 1
//     cout << (total % 2) << "\n";
//     return 0;
// }

int main()
{
    long long n;
    cin >> n;

    // If n mod 4 is 0 or 3 => diff = 0, else diff = 1
    cout << ((n % 4 == 0 || n % 4 == 3) ? 0 : 1) << "\n";
    return 0;
}
