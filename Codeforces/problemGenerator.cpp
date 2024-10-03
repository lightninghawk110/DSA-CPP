#include <stdio.h>

int problemGenerator()
{
    short n;
    scanf("%hd", &n);
    short m;
    short count;
    scanf("%hd", &m);
    short need = m * 7;
    char rank[8] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', '\0'};
    char arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%c", &arr[i]);
    }

    short i = 0, j = 0;
    short found = 0;
    while (i < 7 && j < n)
    {
        j = 0;
        count = m;
        if (found == count)
            break;
        while (count != 0)
        {
            if (rank[i] == arr[j])
                found++;
            j++;
            if (j == n - 1)
                count--;
        }
        i++;
    }

    return need - found;
}

int main()
{
    short t;
    scanf("%hd", &t);

    while (t--)
    {

        printf("%hd\n", problemGenerator());
    }
    return 0;
}