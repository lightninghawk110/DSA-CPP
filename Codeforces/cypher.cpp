#include <stdio.h>

short *cypher(short n)
{
    static short Earr[100]; // Use static array to avoid returning a local variable.

    for (short i = 0; i < n; i++)
    {
        scanf("%hd", &Earr[i]);
    }

    for (short i = 0; i < n; i++)
    {
        short n_mov;
        scanf("%hd", &n_mov);
        char mov[n_mov + 1]; // Add extra space for null character
        scanf("%s", mov);    // read the movement sequence
        for (short j = 0; j < n_mov; j++)
        {
            if (mov[j] == 'D')
            {
                if (Earr[i] == 9)
                {
                    Earr[i] = 0;
                }
                else
                {
                    Earr[i]++;
                }
            }
            else if (mov[j] == 'U')
            {
                if (Earr[i] == 0)
                {
                    Earr[i] = 9;
                }
                else
                {
                    Earr[i]--;
                }
            }
        }
    }

    return Earr;
}

int main(int argc, char const *argv[])
{
    short t;
    scanf("%hd", &t);

    while (t--)
    {
        short *ptr;
        short n;
        scanf("%hd", &n);
        ptr = cypher(n);
        for (short i = 0; i < n; i++)
        {
            printf("%hd ", *(ptr + i));
        }
        printf("\n");
    }
    return 0;
}
