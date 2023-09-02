#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;


int main()
{
    fastio;
    int n1=284,n2=220,s1=0,s2=0;
    for (int i = 1; i <n1; i++)
    {
        if ((n1 % i == 0))
        {
            s1 = s1+ i;
        }
        
    }

        for (int i = 1; i <n2; i++)
    {
        if ((n2 % i == 0))
        {
            s2+=i;
        }
        
    }
    cout << s1 << " " << s2 << endl;
    if ((n1 == s2) && (n2 == s1) )
    {
        cout << "Amicable" << endl;
    }
    
    return 0;
}