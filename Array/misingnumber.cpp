#include <iostream>
#include <vector>
using namespace std;

int missingNumber(int arr[], int n)
{
    int sum = 0, s = 0,ms = 0;
    for (int i = 0; i < (n-1); i++)
    {
        sum = sum + arr[i];
    }

    s = n * (n + 1) / 2;
    ms = s - sum;
    return ms;
}

int main()
{
    int arr[] = {1,2,3,5};
    int n = 5;
    int result = missingNumber(arr, n);
    cout << result << endl;
}