#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
void printArray(int arr[], int size)
{
   for (int i = 0; i < size; i++)
   cout << arr[i] << " ";
  
   cout << endl;
} 
int main()
{
    fastio;
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
   int s = 0;
    int e = 9;
    while(s<e)
    {
        int temp = arr[s];
        arr[s] = arr[e];
        arr[e] = temp;
        s++;
        e--;
    }
    printArray(arr,10);

    return 0;
}