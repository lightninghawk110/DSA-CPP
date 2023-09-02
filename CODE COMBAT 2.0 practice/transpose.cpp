#include <bits/stdc++.h>
using namespace std;
#define N 4
 
// This function stores transpose
// of A[][] in B[][]
void transpose(int A[][N], int B[][N])
{
    int i, j;
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            B[i][j] = A[j][i];
}