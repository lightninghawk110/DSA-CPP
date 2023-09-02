#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    
    int n,d,count = 0;
    cin >> n;
    while (n>0)
    {
        d = n%10;
        count++;
        n=n/10;
    }
    cout << count << endl;
    return 0;
}