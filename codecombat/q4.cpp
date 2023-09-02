#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    string s;
    cin >> s;
    int n;
    n = s.length();
    for(int i = 0; i < n; i++)
    {
        if (s[i] == " ")
        {
            s.append("\n");
        }
        
    }
    
    return 0;
}