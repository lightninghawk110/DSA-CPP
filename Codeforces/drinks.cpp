#include <stdio.h>

int main(int argc, char const *argv[])
{
    short t;
    scanf("%hd", &t);
    short arr[100];
    int sum = 0;
    float answer = 0.0;
    for (short i = 0; i < t; i++)
    {
        scanf("%hd", &arr[i]);
    }
    for (short i = 0; i < t; i++)
    {
        sum+=arr[i];
    }

    answer = (float)sum/t;
    
    printf("%.4f", answer);

    
}
