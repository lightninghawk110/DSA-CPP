#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int one,two,sum;
    one = 0;
    two =1;
    int n;
    cin >> n;
    cout << one << endl;
    for (int i = 1; i <=n; i++)
    {
        sum = one + two;
        one = two;
        two = sum;
        cout << sum << endl;
    }
    
    return 0;
}