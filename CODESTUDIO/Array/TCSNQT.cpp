//Given an integer array Arr of size N the task is to find the count of elements whose value is greater than all of its prior elements.

//Note : 1st element of the array should be considered in the count of the result.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0,a,m=INT_MIN;
    cin>>n;
    while(n--)
    {
        cin>>a;
        if(a>m)
        {
            m=a;
            c++;
        }
    }
    cout<< c;
}