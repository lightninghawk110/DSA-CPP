#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int fact = 1;
    int num;
    cin >> num;
    for (int i = 1; i <=num; i++)
    {
        fact = fact * i;
    }
    cout << fact;
    return 0;
}