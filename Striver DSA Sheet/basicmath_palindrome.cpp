#include <bits\stdc++.h>

using namespace std;

int main()
{
    int n;
    cout << "enter a number";
    cin >> n;
    int rev = 0;
    int temp = n;
    while (n > 0)
    {
        int rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }

    if (temp == rev)
    {
        cout << "palindrome";
    }
    else
    {
        cout << "not palindrome";
    }
}