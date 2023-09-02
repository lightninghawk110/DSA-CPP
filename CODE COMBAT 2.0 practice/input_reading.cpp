#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int curr_read,prev_read;
    cin >> prev_read;
    cin >> curr_read;
    float unit;
    unit = curr_read - prev_read;
    float amt;
   
    if (unit > 0 && unit <=100)
    {
        unit = unit*3.5;
    }
    if(unit > 100 && unit <=200)
    {
        unit = unit*4;
    }
    if(unit > 200 && unit <= 300)
    {
        unit = unit*4.5;
    }
    if(unit > 500)
     {
        amt = unit*5;
     }
    cout << amt<< endl;
    return 0;
}