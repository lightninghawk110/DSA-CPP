#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
bool ifprime()
{
       int num;
    cin >> num;
    for (int i = 2; i < num/2; i++)
    {
        if(num % i == 0)
        {
            return false;
        }
    }
    
    return true;
}

int main()
{
    fastio;
    if(ifprime())
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no";
    }
    
}