#include<iostream>
#include<vector>
using namespace std;

vector<int> subArraySum( int arr[], int n, long s)
{
        int sum=0,i=0,j=0;
    while((i<n) && (j<=n)){
        if (s == 0){
            return {-1};
        }
         else if(sum<s){
             sum+=arr[j];
             j++;
         }
         else if(sum>s){
             sum-=arr[i];
             i++;
         }
         else if(sum==s){
         return {i+1,j};
         break;
         }
    } 
    return {-1};
}

