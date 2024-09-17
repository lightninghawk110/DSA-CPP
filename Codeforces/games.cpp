#include<stdio.h>

int main(int argc, char const *argv[])
{
    short n=2;
    scanf("%hd", &n);
    short arr[30][2];
    short count = 0;
    for (short i = 0; i < n; i++)
    {
        for (short j = 0; j < 2; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (short i = 0; i < n; i++)
    {
        for (short j = 0; j < n; j++)
        {
            if (arr[i][0] == arr[j][1])
            {
                count++;
            }
            
        }
    }

    printf("%hd\n", count);

    

    return 0;
}
