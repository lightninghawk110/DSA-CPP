#include <iostream>
#include <vector>
using namespace std;

class Solution
{
    public:
    void merge(int arr[], int l, int m, int r)
    {
         vector<int> op;
         int i=l;
         int j=m+1;
         while(i<=m && j<=r){
             if(arr[i]<=arr[j]){
                 op.push_back(arr[i]);
                 i++;
             }
             else{
                 op.push_back(arr[j]);
                 j++;
             }
         }
         while(i<=m){
             op.push_back(arr[i]);
             i++;
         }
          while(j<=r){
             op.push_back(arr[j]);
             j++;
         }
         for(int k=l;k<=r;k++){
             arr[k]=op[k-l];
    }
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
         if(l>=r){
            return ;
        }
        int mid = (l+r)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        merge(arr,l,mid,r);
    }
};