#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    float a,b,c,r1,r2;
    cin >> a;
    cin >> b;
    cin >> c;
     float d = b*b - 4*a*c;
    r1 = (-b + sqrt(d))/(2*a);
    r2 = (-b - sqrt(d))/(2*a);
    cout << r1 << r2;
    return 0;
}