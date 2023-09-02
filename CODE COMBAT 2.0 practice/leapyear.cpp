#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int num;
    cin >> num;
    if (num % 400 == 0 || (num % 4 == 0 )  && (num % 100 !=0))
    {
        cout << "leap";

    }
    
    return 0;
}