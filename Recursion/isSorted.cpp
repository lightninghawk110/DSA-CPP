#include <bits/stdc++.h>
using namespace std;
bool isSorted(int *arr, int n)
{
    if (n == 0 || n == 1)
        return true;
    if( arr[0] > arr[1])
    {
        return false;
    }
    else{
        bool rem = isSorted(arr + 1, n-1);
        return rem;
    }
}
int main()
{   int size = 6;
    int arr[] = {1,2,3,4,5,6}; 
    bool ans = isSorted(arr,size);
    if (ans)
    {
        cout << "Sorted "<< endl;
    }
    else
    {
        cout << "not sorted" << endl;
    }
    
}