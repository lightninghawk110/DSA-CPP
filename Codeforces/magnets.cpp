#include <stdio.h>
int main(int argc, char const *argv[])
{
    short n;
    scanf("%hd", &n);
    short arr[100000];
    short count = 0;
    for (short i = 0; i < n; i++)
    {
        scanf("%hd", &arr[i]);
    }
    for (short i = 0; i < n; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            count++;
        }
    }

    printf("%hd", count);

    return 0;
}
