#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    float s,ans,a,b,c;
    a = 4;
    b = 13;
    c = 15;
     s= (a+b+c)/2;
     ans = sqrt(s*(s-a)*(s-b)*(s-c));
     cout << ans;
    return 0;
}