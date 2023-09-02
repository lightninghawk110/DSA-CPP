#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int gcdc( int a, int b ) { 
    if ( a == 0){
        return b;
    }
    return gcdc((b%a),a);
}

int checkPrime(int n)
{
    for(int i=2;i<n/2;i++)
    {
        if(val%2 ==0)
            return false;
    }
    return true;
}
int main()
{
    int a = 10, b = 15, c= 20;
    int res;
    res = gcdc(a,b);
    int val = gcdc(res,c);
    cout << val << endl;
    
    
    return 0;
}