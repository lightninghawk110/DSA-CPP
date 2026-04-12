#include <bits/stdc++.h>

using namespace std;

int digitCount(int n)
{
    int count = 0;
    while (n > 0)
    {
        count++;
        n = n / 10;
    }
    return count;
}

int digitCount2(int n)
{
    return log10(n) + 1;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << digitCount(n) << endl;
    cout << digitCount2(n) << endl;
    return 0;
}