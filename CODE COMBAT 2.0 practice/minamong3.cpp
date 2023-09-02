#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int a,b,c;
    cin >> a;
    cin >> b;
    cin >> c;
    int gt;
    gt = (a>b && a>c ?a : (b>c ?b :c));
    cout << gt << "\n";
    return 0;
}