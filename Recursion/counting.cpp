#include <bits/stdc++.h>
using namespace std;
void pri (int n)
{
    if ( n == 0 ) //base case
        return ;
    cout << n << endl;
    pri (n-1);
}
int main()
{
    int n;
    cin >> n;
    pri(n);
}