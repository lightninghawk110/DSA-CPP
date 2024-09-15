#include <stdio.h>
int main(int argc, char const *argv[])
{
    short n;
    scanf("%hd", &n);
    short i=1,sum=0,cube;
    while(n>=i){
        cube = 0;
        for (short j = 1; j <= i; j++)
        {
            
            cube+=j;
        }

        if (n < cube) {
            break; 
        }
        sum+=cube;
        n=n-cube;
        i++;
    }
    printf("%hd\n",i-1);
    return 0;
}


