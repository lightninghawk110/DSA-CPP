#include <bits/stdc++.h>
using namespace std;

// t.n = O(n)
void printAllDivisor(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }
}

// t.n = O(sqrt(n))
int printAllDivisor2(int n)
{
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
            if (n / i != i)
            {
                cout << n / i << " ";
            }
        }
    }

}

int main()
{
    int n;
    cout << "enter a number";
    cin >> n;
    cout << "divisors are: " << printAllDivisor2(n) << endl;
    return 0;
}