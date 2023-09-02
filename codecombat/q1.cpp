#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
bool leap_year(int num)
{
    if (num % 400 == 0 || (num % 4 == 0 )  && (num % 100 !=0))
    {
        return true;
    }
    else{
    return false;
    }
        
}
int main()
{
    fastio;
    int count = 0;
    for (int i= 2023; i < 3000;i++ )
    {
        //int year = 2023;
        if(leap_year(i))
        {
            cout << i << endl;
            count++;
        }
        if(count == 20)
        {
            break;
        }
        //year++;
    }
    
    return 0;
}