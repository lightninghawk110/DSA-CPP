#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int n,rev,d;
    cin >> n;
    while(n>0)
    {
        d = n%10;
        rev = rev*10 +d;
        n=n/10;
    }
    cout << rev << endl;
    return 0;
}