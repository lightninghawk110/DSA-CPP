#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"


using namespace std;

int main()
{
    fastio;
    int a,b,c=0;
    cin >> a;
    cin >> b;
    cout << "before" << a << " " << b << " ";
    a = a+b;
    b = a-b;
    a = a-b;
    // c = a;
    // a = b;
    // b = c;
    cout << a << " " << b;
    return 0;
}