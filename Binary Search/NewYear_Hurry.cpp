#include<iostream>
using namespace std;


int questionSolved( int n, int k)
{
    int i=0;
    int total = 240;
    int rm = 240-k;
    int pm = 0;
    for (i = 1; i <=n; i++)
    {
        if ((rm - pm ) < i*5)
        {
            break;
        }
        pm +=5*i;
        
    }
    return --i;
    
}
int main()
{
    int n;
    int k;
    cin >> n;
    cin >> k;
    int res = questionSolved(n,k);
    cout << res;
}