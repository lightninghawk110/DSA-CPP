#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    vector<int> v;
    vector<int> ans;
    //int arr[10];
    for (int i = 0; i < 3; i++)
    {
        
        int temp;
        cin >> temp;
        v.push_back(temp);
        
    }
    
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << endl;
    // }
    sort(v.begin(), v.end());
    int n = v.size();
    cout << v[n-2] << endl;
    cout << v[n-1] << endl;

    return 0;
}