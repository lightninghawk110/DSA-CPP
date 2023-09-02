#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int gcd(int n1,int n2)
{
    if(n2 == 0)
    {
        return n2;
    }
    return gcd(n2%n1,n1); 
}
int main()
{
    fastio;
    int n1 = 10,n2=20;
    //cin >> n1;
    //cin >> n2;
    //cin >> n3;
    cout << gcd(n1,n2);
    return 0;
}