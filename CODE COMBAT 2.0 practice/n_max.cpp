#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    vector<int> v;    fastio;
    
    int n;
    cin >> n;
    int temp;
    for (int i = 0; i < n; i++)
    {
        // cout << "enter " << i;
        cin >> temp;
        v.push_back(temp);
    }
    for (int i = 0; i <v.size(); i++)
    {
        cout << v[i] << endl;
    }
    cout << *max_element(v.begin(),v.end()) << endl;
    return 0;
}