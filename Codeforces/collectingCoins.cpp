#include <stdio.h>
#include <algorithm>
using namespace std;

int largest(int arr[])
{
    int i;
    int max = arr[0];
    for (i = 1; i < 3; i++)
        if (arr[i] > max)
            max = arr[i];
    return max;
}

void collectingCoins(int arr[])
{
    int m = largest(arr);

    // Iterate 3 times to handle each of the first 3 elements
    for (int i = 0; i < 3; i++)
    {
        // If the current element is less than the maximum, make them equal
        if (arr[i] < m)
        {
            int rem = m - arr[i];
            if (rem <= arr[3]) // Ensure there are enough coins left to balance
            {
                arr[i] += rem;
                arr[3] -= rem; // Deduct the used coins
            }
            else
            {
                printf("NO\n"); // Not enough coins to balance
                return;
            }
        }
    }

    // After balancing, check if there are enough coins left and divisible by 3
    if (arr[3] % 3 == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}

int main(int argc, char const *argv[])
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int arr[4];
        for (int i = 0; i < 4; i++)
        {
            scanf("%d", &arr[i]);
        }
        collectingCoins(arr);
    }

    return 0;
}
