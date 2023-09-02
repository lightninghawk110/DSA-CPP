#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int num,d,sum=0;
    cin >> num;
    while(num>0)
    {
        d = num%10;
        sum+=d;
        num=num/10;
    }
    cout << sum << endl;
    return 0;
}