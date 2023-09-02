#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;


int main()
{
    fastio;
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        if (n%i == 0)
        {
            sum +=i;
        }
    }
    if (n == sum)
    {
        cout << "perfect";
    }
    
    
    return 0;
}