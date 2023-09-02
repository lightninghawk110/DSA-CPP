#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
vector<int> dupli(int arr[], int n)
{
    sort(arr,arr+n); // sort
    vector<int> ans; // take extra space
    int i = 0;
   while (i < n) //loop for element
    {
        ans.push_back(arr[i]); // pushing elements
        while (arr[i] == arr[i+1])
        {
            i = i+1; // increasing pointer
        }
        i = i+1;// increasing for current element i.e both are unequal so, i will be added in next round
    
    }
    return ans;   
}

int main()
{
    fastio;
    int arr[5] = {1,2,4,4,5};
    vector<int> v = dupli(arr,5);
    for(int i:v)
    {
        cout << i;
    }
    return 0;
}