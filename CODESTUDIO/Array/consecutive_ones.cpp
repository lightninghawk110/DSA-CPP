#include<bits/stdc++.h>
using namespace std;
int consecutiveOnes(vector<int>& arr){
    int maxi =0, count = 0;
    for(int i =0;i<arr.size();i++)
    {
        if(arr[i]==1)
        {
            count++;
            maxi = max(maxi,count);
        }
        else{
            count =0;
        }
    }
    return maxi;
}