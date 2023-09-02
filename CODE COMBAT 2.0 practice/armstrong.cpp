#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int n,d,sum=0,count=0;
    cin >> n;
    while (n>0)
    {
        d = n%10;
        count++;
        n=n/10;

    }
    
    while (n>0)
    {
        d = n% 10;
        sum+=pow(d,count);
        n=n/10;
    }
    if (sum == n)
    {
        cout << "armstrong";
    }
    
    return 0;
}