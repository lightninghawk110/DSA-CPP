#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int count(int n)
{
    int d;
    int count;
    vector<int> v;
    while(n>0)
    {
        d = n%10;
        v.push_back(d);
        n=n/10;
    }
    //cout << v.front();
    int sum = v.front() + v.back();
    return sum;

}
int main()
{
    fastio;
    int n;
    cin >> n;
    cout << count(n);


    
    

    


    return 0;
}