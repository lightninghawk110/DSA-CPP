#include <bits/stdc++.h>

#define fastio                        
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int num;
    cin >> num;
    for (int i = 1; i < 11; i++)
    {
        cout << num*i << "\n";
    }
    
    return 0;
}